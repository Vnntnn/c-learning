#include <stdio.h>


int main() {
    int num;

    scanf("%d", &num);

    for (int i = 0; i < 3; i++) {
        if (num - (i * 2) >= 1) {
            if (i > 0) {
                printf("\n");
            }
            for (int j = 0; j < num - (i * 2); j++) {
                printf("*");
            }
        }
    }

    return 0;
}