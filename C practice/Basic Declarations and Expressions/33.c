// Write a C program that accepts some integers from the user and finds the highest value and the input position.
#include <stdio.h>

int main() {
    int num[5], max, position;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    for (int j = 0; j < 5; j++) {
        if (num[j] > max) {
            max = num[j];
            position = j + 1;
        }
    }

    printf("Highest value: %d\nPosition: %d", max, position);

    return 0;
}
