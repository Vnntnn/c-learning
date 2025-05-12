#include <stdio.h>


int main() {
    int n, count = 0;

    scanf("%d", &n);

    char v[n];

    for (int i = 0; i < n; i++) {
        scanf(" %c", &v[i]);

        if (v[i] == 'A' || v[i] == 'E' || v[i] == 'I' || v[i] == 'O' || v[i] == 'U') {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}