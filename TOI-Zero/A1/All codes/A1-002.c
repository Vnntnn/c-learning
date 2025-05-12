#include <stdio.h>


int main() {
    int coins[] = {10, 5, 2, 1};
    int used[4] = {0, 0, 0, 0};
    int rem;

    scanf("%d", &rem);

    while (rem > 0) {
        if (rem >= 10) {
            rem -= coins[0];
            used[0] += 1;
        }

        else if (rem >= 5) {
            rem -= coins[1];
            used[1] += 1;
        } 

        else if (rem >= 2) {
            rem -= coins[2];
            used[2] += 1;
        }

        else {
            rem -= coins[3];
            used[3] += 1;
        }
    }

    printf("10 = %d\n5 = %d\n2 = %d\n1 = %d", used[0], used[1], used[2], used[3]);

    return 0;
}
