/*ASSIGNMENT 2.
QUES 1.*/
#include <stdio.h>

int main()
{
    int marks[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        marks[i] += 5;

        printf("%d ", marks[i]);
    }
    return 0;
}

//QUES 2.//
#include <stdio.h>
#include <stdio.h>

int main()
{
    int marks[3];
    printf("Enter marks for 3 students: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (marks[i] >= 75)
        {
            printf("A\n");
        }
        else if (marks[i] >= 60 && marks[i] <= 74)
        {
            printf("B\n");
        }
        else if (marks[i] >= 40 && marks[i] <= 59)
        {
            printf("C\n");
        }
        else
        {
            printf("D\n");
        }
    }

    return 0;
}
//QUES 3.//
#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter 5 marks : ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i]==99)
        {
            printf("%d", marks[i]);
            break;
        }
        
    }
    
    
    return 0;
}
//QUES4//
#include <stdio.h>

int main(){
    int n=0,marks[5];
    printf("Enter 5 marks : ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (marks[i]==99)
        {
            n++;
            printf("%d\n%d", marks[i], n);

        }
        
    }
    
    
    return 0;
}

//QUES 5.//
#include <stdio.h>

int main()
{
    int sum = 0, marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    printf("%d", sum);

    return 0;
}

//QUES6.//
#include <stdio.h>
int main()
{
    int sum = 0, marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    printf("%d", sum / 5);

    return 0;
}

//QUES 7.//
#include <stdio.h>
int main()
{
    int marks[10];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (marks[i] % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }

    return 0;
}

//QUES 8.//
#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    int max = marks[0], min = marks[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
        if (marks[i] < min)
        {
            min = marks[i];
        }
    }
    printf("%d \n%d", max, min);

    return 0;
}

//QUES 9.//
#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter 5 marks : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    int peak = marks[0];
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] > peak)
        {
            peak = marks[i];
        }
    }
    printf("%d", peak);

    return 0;
}

//QUES 10.//
#include <stdio.h>

int main()
{
    int arr[5], n, count = 0;
    printf("Enter 5 elements :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        n = arr[i];
        int f = 0;
        for (int j = 2; j < n; j++)
        {
            if (n % j == 0)
            {
                f = 1;
                break;
            }
            if (f == 0)
            {
                count++;
            }
        }
    }
    printf("%d", count);

    return 0;
}

//QUES 11.//

#include <stdio.h>

int main()
{
    int arr[5], input;

    printf("First input 5 elements for array : ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Press 0 to insert at the starting, 5 for end and any other index if you want :");
    scanf("%d", &input);
    if (input == 0)

    {   
        for (int i = 0; i < 5; i++) 
        {
            scanf("%d", &arr[0]);
        }
    }
    if (input == 5)
    {
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &arr[5]);
        }
    }
    else
    {
        {
            for (int i = 0; i < 5; i++)
            {
                scanf("%d", &arr[input]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}

//QUES 12.//

#include <stdio.h>

void deleteFront(int arr[], int *size) {
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void deleteAtPosition(int arr[], int *size, int position) {
    if (position < *size) {
        for (int i = position; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    }
}

void deleteEnd(int arr[], int *size) {
    (*size)--;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Original Array: ");
    printArray(arr, size);

    deleteFront(arr, &size);
    printf("After deleting front: ");
    printArray(arr, size);

    deleteAtPosition(arr, &size, 2);  // Delete element at position 2
    printf("After deleting at position 2: ");
    printArray(arr, size);

    deleteEnd(arr, &size);
    printf("After deleting end: ");
    printArray(arr, size);

    return 0;
}

/*QUES 13.
Input: arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
Input: arr[] = {2, 3, 4, 5, 1}
Output: {1, 2, 3, 4, 5}*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*QUES 14.
Given an array of n integers. The task is to print the duplicates in the given array.
If there are no duplicates then print -1.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
Input: {5, 40, 1, 40, 100000, 1, 5, 1}
Output: 5 40 1
*/

#include <stdio.h>

int main(){
    int arr[]={2,10,10,100,2,10,11,2,11,2};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
            
        }
        
        
    }
    
    return 0;
}