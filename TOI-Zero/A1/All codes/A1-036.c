#include <stdio.h>


int main() {
    int num;

    scanf("%d", &num);

    for (int i = num; i >= 0; i--) {
        if (i == 0) {
            printf("0");
            break;
        }

        if (i % 10 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}