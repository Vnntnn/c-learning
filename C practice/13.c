// Write a C program that accepts three integers and finds the maximum of three.
#include <stdio.h>


int main() {
    int f, s, t;
    int max;

    printf("Input the first integer: ");
    scanf("%d", &f);
    printf("Input the second integer: ");
    scanf("%d", &s);
    printf("Input the third integer: ");
    scanf("%d", &t);

    int arr[] = {f, s, t};
    max = f;

    for (int i = 1; i < 3; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else {
            continue;
        }
    }

    printf("Maximum value of three integers: %d", max);

    return 0;

}
