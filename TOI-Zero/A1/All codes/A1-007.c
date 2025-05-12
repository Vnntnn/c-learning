#include <stdio.h>


int main() {
    char t;
    char v[] = {'a', 'e', 'i', 'o', 'u'};

    scanf("%c", &t);

    for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
        if (t == v[i]) {
            printf("yes");
            return 0;
        }
    }

    printf("no");
    return 0;
}
