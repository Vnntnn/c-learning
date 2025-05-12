#include <stdio.h>


int main() {
    char t[3];
    int count = 0;

    scanf("%s", &t);

    for (int i = 0; i < 3; i++) {
        if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}