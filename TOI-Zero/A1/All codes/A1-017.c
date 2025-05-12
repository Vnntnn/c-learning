#include <stdio.h>


int main() {
    int y1, m1, d1;
    int y2, m2, d2;

    scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);

    if (y1 > y2) {
        printf("2");
        return 0;
    } else if (y2 > y1) {
        printf("1");
        return 0;
    }

    if (m1 > m2) {
        printf("2");
        return 0;
    } else if (m2 > m1) {
        printf("1");
        return 0;
    }

    if (d1 > d2) {
        printf("2");
        return 0;
    } else if (d2 > d1) {
        printf("1");
        return 0;
    } else {
        printf("0");
    }
    
    return 0;
}