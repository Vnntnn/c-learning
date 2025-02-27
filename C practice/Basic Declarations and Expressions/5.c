// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
#include <stdio.h>


int main(int height, int weight)
{
    height = 7;
    weight = 5;

    int perimeter = 2 * (height + weight);
    int area = height * weight;

    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d square inches", area);

    return 0;
}
