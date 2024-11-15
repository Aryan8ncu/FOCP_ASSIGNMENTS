//STONE PAPER SCISSOR//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice;
    char user, stone, paper, scissor;
    printf("Enter your choice of stone paper scissor as 1,2 and 3 respectively : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        user = stone;
    }
    else if (choice == 2)
    {
        user = paper;
    }
    else if (choice == 3)
    {
        user = scissor;
    }
    else
    {
        printf("Invalid Choice");
    }
    srand(time(0));
    int comp = rand() % 101;
   if (comp < 33)
    {
        comp = stone;
    }
    else if (comp > 33 && comp < 66)
    {
        comp = paper;
    }
    else if (comp > 66)
    {
        comp = scissor;
    }
    if (user == stone && comp == paper)
    {
        printf("Comp Wins");
    }
    else if (user == stone && comp == scissor)
    {
        printf("You Win");
    }
    else if (user == stone && comp == stone)
    {
        printf("Tied");
    }
    else if (user == paper && comp == stone)
    {
        printf("You Win");
    }
    else if (user == paper && comp == paper)
    {
        printf("Tied");
    }
    else if (user == paper && comp == scissor)
    {
        printf("Comp Wins");
    }
    else if (user == scissor && comp == stone)
    {
        printf("Comp Wins");
    }
    else if (user == scissor && comp == paper)
    {
        printf("You Win");
    }
    else if (user == scissor && comp == scissor)
    {
        printf("Tied");
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}