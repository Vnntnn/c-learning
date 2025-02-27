// Write a C program to compute the perimeter and area of a circle with a given radius.
#include <stdio.h>


int main(int r) {
    r = 6;
    float pi = 3.14;
    double perimeter = 2 * pi * r;
    double area = pi * r * r;

    printf("Perimeter of the Circle = %lf inches\nArea of the Circle = %lf square inches", perimeter, area);

    return 0;
}
