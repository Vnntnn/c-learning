// Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float r1, r2;

    printf("Input the first number(a): ");
    scanf("%f", &a);
    printf("Input the second number(b): ");
    scanf("%f", &b);
    printf("Input the third number(c): ");
    scanf("%f", &c);

    r1 = ((b * -1) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
    r2 = ((b * -1) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);

    printf("Root1 = %f\nRoot2 = %f", r1, r2);

    return 0;
}
