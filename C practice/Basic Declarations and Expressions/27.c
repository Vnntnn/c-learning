// Write a C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.
#include <stdio.h>

int main()
{
    int num[4], p;
    float avg;

    printf("Input the first number: ");
    scanf("%d", &num[0]);
    printf("Input the second number: ");
    scanf("%d", &num[1]);
    printf("Input the third number: ");
    scanf("%d", &num[2]);
    printf("Input the fourth number: ");
    scanf("%d", &num[3]);
    printf("Input the fifth number: ");
    scanf("%d", &num[4]);

    for (int i = 0; i < 5; i++)
    {
        if (num[i] >= 0)
        {
            p += 1;
            avg += num[i];
        }
    }

    avg /= p;

    printf("Number of positive numbers: %d\nAverage value of the said positive numbers: %.2f", p, avg);

    return 0;
}
