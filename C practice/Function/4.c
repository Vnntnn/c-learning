// Write a program in C to check if a given number is even or odd using the function.
#include <stdio.h>

int checkOddEven(int n1)
{
    return (n1 & 1);
}

int main()
{
    int n1;
    printf("Function : check the number is even or odd:\n");
    printf("-------------------------------------------\n");
    printf("Input any number : ");
    scanf("%d", &n1);

    if (checkOddEven(n1))
    {
        printf("The entered number is odd.");
    }
    else
    {
        printf("The entered number is even.");
    }
    return 0;
}
