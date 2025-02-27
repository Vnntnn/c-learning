// Write a C program that reads 5 numbers and sums all odd values between them.
#include <stdio.h>

int main()
{
    int f, s, t, fo, fi;
    int total = 0;

    printf("Input the first number: ");
    scanf("%d", &f);
    printf("Input the second number: ");
    scanf("%d", &s);
    printf("Input the third number: ");
    scanf("%d", &t);
    printf("Input the fourth number: ");
    scanf("%d", &fo);
    printf("Input the fifth number: ");
    scanf("%d", &fi);

    if (f % 2 != 0)
    {
        total += f;
    }
    if (s % 2 != 0)
    {
        total += s;
    }
    if (t % 2 != 0)
    {
        total += t;
    }
    if (fo % 2 != 0)
    {
        total += fo;
    }
    if (fi % 2 != 0)
    {
        total += fi;
    }

    printf("Sum of all odd values: %d", total);

    return 0;
}
