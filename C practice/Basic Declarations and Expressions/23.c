// Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
#include <stdio.h>

int main()
{
    float f, s, t;
    float perimeter;

    printf("Input the first number: ");
    scanf("%f", &f);
    printf("Input the second number: ");
    scanf("%f", &s);
    printf("Input the third number: ");
    scanf("%f", &t);

    if (f < (s + t) && s < (f + t) && t < (s + f))
    {
        perimeter = f + s + t;
        printf("Perimeter  = %.1f", perimeter);
    }
    else
    {
        printf("Can't calculated");
    }

    return 0;
}
