#include <stdio.h>


int main() {
    int num;
    char romans[][4] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    scanf("%d", &num);

    if (num < 0) {
        printf("Error : Please input positive number");
    } else if (num < 1 || num > 9) {
        printf("Error : Out of range");
    } else {
        printf("%s", romans[num - 1]);
    }

    return 0;
}