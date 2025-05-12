#include <stdio.h>


int main() {
    int num;

    scanf("%d", &num);

    if (num >= 1000 && num <= 9999) {
        int d1 = num % 10;
        int d2 = (num / 10) % 10;
        int d3 = (num / 100) % 10;
        int d4 = num / 1000;

        printf("%d%d%d%d", d1, d2, d3, d4);
    }

    return 0;
}