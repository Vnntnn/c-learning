// Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include <stdio.h>

int main() {
    int sec;
    int h, m, rs;

    printf("Input seconds: ");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec - (h * 3600)) / 60;
    rs = (sec - (h * 3600)) - (m * 60);

    printf("H:M:S - %d:%d:%d", h, m, rs);

    return 0;
}
