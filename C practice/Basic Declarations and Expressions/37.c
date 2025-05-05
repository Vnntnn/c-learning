#include <stdio.h>

int main() {
    int x, y;
    char rx = '-', ry = '-';

    printf("Input the Coordinate(x,y):\n");
    scanf("%d\n%d", &x, &y);

    if (x > 0) {
        rx = '+';
    }
    if (y > 0) {
        ry = '+';
    }

    printf("Quadrant-I(%c,%c)", rx, ry);
    return 0;
}