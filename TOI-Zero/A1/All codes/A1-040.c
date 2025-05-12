#include <stdio.h>


int main() {
    int cal, res = 0;
    int a_cal[] = {100, 120, 200, 60};

    while (1) {
        scanf("%d", &cal);

        if (cal > 4) break;
        else {
            res += a_cal[cal - 1];
        }
    }

    printf("Bye Bye\nTotal Calories: %d", res);

    return 0;
}