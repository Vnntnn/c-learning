// Write a C program to compute the sum of consecutive odd numbers from a given pair of integers.
#include <stdio.h>

int main()
{
    int f, s, sum;

    printf("Input first number of the pair: ");
    scanf("%d", &f);
    printf("Input second number of the pair: ");
    scanf("%d", &s);

    if (s > f)
    {
        int temp = f;
        f = s;
        s = temp;
    }

    printf("List of odd numbers:\n");

    for (int i = s; i <= f; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
            sum += i;
        }
    }

    printf("Sum=%d", sum);
    return 0;
}
