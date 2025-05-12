#include <stdio.h>


int main() {
    int day, month;

    scanf("%d %d", &day, &month);

    if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("capricorn");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("aquarius");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("pisces");
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("aries");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("taurus");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
        printf("gemini");
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        printf("cancer");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("leo");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("virgo");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 23)) {
        printf("libra");
    } else if ((month == 10 && day >= 24) || (month == 11 && day <= 21)) {
        printf("scorpio");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("sagittarius");
    }

    return 0;
}
