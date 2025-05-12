#include <stdio.h>

int main() {
    char t[5];
    int count = 1;

    scanf("%s", &t);
    
    int len = 0;
    while(t[len] != '\0') {
        len++;
    }

    char temp = t[0];

    for (int i = 1; i < len; i++) {
        if (t[i] != temp) {
            printf("%d%c", count, temp);
            temp = t[i];
            count = 1;
        } else {
            count += 1;
        }
    }

    printf("%d%c", count, temp);

    return 0;
}