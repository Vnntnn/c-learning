// Write a C program that prints all even numbers between 1 and 50 (inclusive).
#include <stdio.h>

int main()
{
    printf("Even numbers between 1 to 50 (inclusive):\n");

    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
