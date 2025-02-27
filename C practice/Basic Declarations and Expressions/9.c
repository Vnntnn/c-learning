// Write a C program that accepts two integers from the user and calculates the sum of the two
#include <stdio.h>


int main()
{
    int f;
    int s;

    printf("Input the first integer: ");
    scanf("%d", &f);
    printf("Input the second integer: ");
    scanf("%d", &s);
    printf("Sum of the above two integers = %d", f + s);

    return 0;
}
