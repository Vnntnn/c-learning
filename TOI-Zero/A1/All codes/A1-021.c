#include <stdio.h>


int main() {
    int y;

    scanf("%d", &y);

    if (y < 1582) {
        if (y % 4 == 0) {
            printf("yes");
        } else {
            printf("no");
        }

    } else {
        if (y % 4 == 0) {
            if (y % 100 != 0 || y % 400 == 0) {
                printf("yes");
            } else {
                printf("no");
            }
        } else {
            printf("no");
        }
    }

    return 0;
}