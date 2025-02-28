// Write a C program to find and print the square of all the even values from 1 to a specified
#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum;

    printf("List of square of each one of the even values from 1 to a ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, sum = pow(i, 2));
        }
    }

    return 0;
}
