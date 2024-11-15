/*ASSIGNMENT 1
QUES 1.*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, orig, rem, d = 0;
    double sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    orig = num;
    // to calculate the number of digits
    while (orig != 0) {
        orig /= 10;
        ++d;
    }
    orig = num;
    // to calculate the sum of the dth power of its digits
    while (orig != 0) {
        rem = orig % 10;
        sum += pow(rem, d);
        orig /= 10;
    }
    // checkimg if the number is an Armstrong number
    if ((int)sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

//QUES 2.//
#include <stdio.h>
int main() {
    int num1, num2, i, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    for(i = 1; i <= num1 && i <= num2; ++i) {
        // If i is a divisor of both numbers, update hcf
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is %d\n", num1, num2, hcf);


    return 0;
}
 
//QUES 3.//

#include <stdio.h>
int subtract(int a, int b) {
    while (b != 0) {
        int borrow;
        borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    return a;
}
int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    result = subtract(num1, num2);

    printf("Result of %d - %d is %d\n", num1, num2, result);
    return 0;
}
//QUES 4.//

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
 

//QUES 5.//

#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    if(sum == num && num != 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
return 0;
}
 

//QUES 6.//

#include <stdio.h>
int main() {
    int x, y;

    printf("Enter the coordinate point (x y): ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0) {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("The coordinate point (%d,%d) lies on the Y-axis.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("The coordinate point (%d,%d) lies on the X-axis.\n", x, y);
    } else {
        printf("The coordinate point (%d,%d) is at the origin.\n", x, y);
    }
    return 0;
}
 

//QUES 7.//


#include <stdio.h>
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1, remainder;
    while (binary > 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    return decimal;
}
int decimalToBinary(int decimal) {
    int binary = 0, base = 1, remainder;

    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    return binary;
}
int main() {
    int choice, number;

    printf("Choose the conversion type:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        printf("The decimal equivalent is %d\n", binaryToDecimal(number));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        printf("The binary equivalent is %d\n", decimalToBinary(number));
    } else {
        printf("Invalid choice! Please run the program again and choose either 1 or 2.\n");
    }
    return 0;
}
 
//QUES 8.//


#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
 

//QUES 9.//

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if ((j - 1) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf(" ");
        for (j = 1; j <= i; j++) {
            if ((j - 1) % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
 

//QUES 10.//

#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }

    return 0;
}
 