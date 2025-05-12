#include <stdio.h>

// It's really hard if you not think carefully


int main() {
    int num;
    scanf("%d", &num);

    int digit[4];
    digit[0] = num / 1000;
    digit[1] = (num % 1000) / 100; 
    digit[2] = (num % 100) / 10;
    digit[3] = num % 10;

    for (int i = 0; i < digit[0]; i++) {
        printf("M");
    }

    if (digit[1] == 9) printf("CM");
    else if (digit[1] >= 5) {
        printf("D");
        for (int i = 0; i < digit[1] - 5; i++) printf("C");
    }
    else if (digit[1] == 4) printf("CD");
    else {
        for (int i = 0; i < digit[1]; i++) printf("C");
    }

    if (digit[2] == 9) printf("XC");
    else if (digit[2] >= 5) {
        printf("L");
        for (int i = 0; i < digit[2] - 5; i++) printf("X");
    }
    else if (digit[2] == 4) printf("XL");
    else {
        for (int i = 0; i < digit[2]; i++) printf("X");
    }

    if (digit[3] == 9) printf("IX");
    else if (digit[3] >= 5) {
        printf("V");
        for (int i = 0; i < digit[3] - 5; i++) printf("I");
    }
    else if (digit[3] == 4) printf("IV");
    else {
        for (int i = 0; i < digit[3]; i++) printf("I");
    }

    return 0;
}