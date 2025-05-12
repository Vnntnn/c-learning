#include <stdio.h>


int power_seq(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return n * n + power_seq(n - 1);
}

int main() {
    int n;
    int sum = 0;

    scanf("%d", &n);

    sum = power_seq(n);

    printf("%d", sum);

    return 0;
}
