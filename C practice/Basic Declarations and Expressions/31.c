// Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
#include <stdio.h>

int main()
{
    int num;

    printf("Input an integer: ");
    scanf("%d", &num);

    if (num > 0)
    {
        (num % 2 == 0) ? printf("Positive Even") : printf("Positive Odd");
    }
    else
    {
        (num % 2 == 0) ? printf("Negative Even") : printf("Negative Odd");
    }

    return 0;
}
