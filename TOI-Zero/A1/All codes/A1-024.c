#include <stdio.h>


int main() {
    int y, cc;

    scanf("%d %d", &y, &cc);

    if (y > 0 && y <= 1990) {

        if (cc <= 1500) {
            printf("1250");
        } else if (cc > 1500 && cc <= 2000) {
            printf("1400");
        } else {
            printf("2000");
        }
    } else if (y > 1990 && y <= 1999) {
        if (cc <= 1500) {
            printf("1100");
        } else if (cc > 1500 && cc <= 2000) {
            printf("1300");
        } else {
            printf("1700");
        }
    } else {
        if (cc <= 1500) {
            printf("1000");
        } else if (cc > 1500 && cc <= 2000) {
            printf("1200");
        } else {
            printf("1500");
        }
    }

    return 0;
}