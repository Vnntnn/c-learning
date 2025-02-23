// Print very large F and C char with #
#include <stdio.h>

int main()
{
    // F
    for (int i = 0; i < 5; i++)
    {
        printf("#");
    }

    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        printf("#\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("#");
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("#\n");
    }

    // C
    printf("   ######\n");
    printf(" ##      ##\n");

    for (int i = 0; i < 5; i++)
    {
        printf("#\n");
    }

    printf(" ##      ##\n");
    printf("   ######\n");

    return 0;
}
