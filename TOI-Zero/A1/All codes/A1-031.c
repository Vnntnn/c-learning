#include <stdio.h>


int main() {
    int num;
    char str[7];

    scanf("%d", &num);

    sprintf(str, "%d", num);

    if (num >= 1000 && num < 10000) {
        printf("%c,%c%c%c", str[0], str[1], str[2], str[3]);
    } else if (num >= 10000 && num < 100000) {
        printf("%c%c,%c%c%c", str[0], str[1], str[2], str[3], str[4]); 
    } else if (num >= 100000 && num < 1000000) {
        printf("%c%c%c,%c%c%c", str[0], str[1], str[2], str[3], str[4], str[5]); 
    }

    return 0;
}