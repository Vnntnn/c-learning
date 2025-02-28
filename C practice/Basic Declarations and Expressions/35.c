#include <stdio.h>

int main()
{
    int f, s;

    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");
    printf("Input first number of the pair: ");
    scanf("%d", &f);
    printf("Input second number of the pair: ");
    scanf("%d", &s);

    if (f > s)
    {
        printf("The pair is in descending order!");
    }
    else
    {
        printf("The pair is in ascending order!");
    }

    return 0;
}
