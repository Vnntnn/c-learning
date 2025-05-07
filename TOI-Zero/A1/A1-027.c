#include <stdio.h>


int main() {
    char t[5];

    scanf("%s", &t);

    for (int i = 4; i >= 0; i--) {
        if (t[i] >= 'A' && t[i] <= 'Z') {
            t[i] += 32;
        }

        printf("%c", t[i]);
    }

    return 0;
}