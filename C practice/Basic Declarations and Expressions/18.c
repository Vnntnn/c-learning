// Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
#include <stdio.h>

int main() {
    int days;
    int y, m, d;

    printf("Input no. of days: ");
    scanf("%d", &days);

    y = days / 365;
    days -= (y * 365);
    m = days / 30;
    d = days - (m * 30);

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)", y, m, d);

    return 0;
}
