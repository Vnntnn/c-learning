#include <stdio.h>


int main() {
    char safe;
    int digit;

    scanf("%c\n%d", &safe, &digit);

    if (safe == 'H' & digit == 4567) {
        printf("safe unlocked");
    } 
    else if (safe == 'H' & digit != 4567) {
        printf("safe locked - change digit");
    } 
    else if (safe != 'H' & digit == 4567) {
        printf("safe locked - change char");
    } 
    else {
        printf("safe locked");
    }

    return 0;
}