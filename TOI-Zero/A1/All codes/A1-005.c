#include <stdio.h>


int main() {
    int m, d;
    const char *season[] = {"winter", "spring", "summer", "fall"};
    const char *s_col[12];
    int count = 0;
    int idx = 0;

    scanf("%d\n%d", &m, &d);

    if (m % 3 == 0) {
        if (d >= 21) {
            if (m == 12) {
                m = 1;
            } else {
                m++;
            }
        }
    }

    while (count < 12) {
        s_col[count] = season[idx];
        s_col[count + 1] = season[idx];
        s_col[count + 2] = season[idx];
        count += 3;
        idx++;
    }

    printf("%s", s_col[m - 1]);

    return 0;
}