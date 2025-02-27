// Write a C program that reads 5 numbers and counts the number of positive numbers and negative
#include <stdio.h>

int main() {
    int num[4];
    int p, n;

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

    for (int i = 0; i < 5; i++) {
        if (num[i] >= 0) {
            p += 1;
        } else {
            n += 1;
        }
    }

    printf("Number of positive numbers: %d\nNumber of negative numbers: %d", p, n);

    return 0;
}
