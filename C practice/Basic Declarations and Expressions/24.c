// Write a C program that reads two integers and checks whether they are multiplied or not.
#include <stdio.h>

int main()
{
    int x, y;

    printf("Input the first number: ");
    scanf("%d", &x);
    printf("Input the second number: ");
    scanf("%d", &y);

    if (x > y)
    {
        int hold = x;
        y = x;
        x = hold;
    }

    if (y % x == 0)
    {
        printf("Multiplied!");
    }
    else
    {
        printf("Not multiplied.");
    }

    return 0;
}
