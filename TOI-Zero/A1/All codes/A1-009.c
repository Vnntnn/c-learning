#include <stdio.h>


int main() {
    int fnum, snum;

    scanf("%d\n%d", &fnum, &snum);

    printf("%d\n", fnum + snum);

    if (fnum + snum >= 50) {
        printf("pass");
    } else {
        printf("fail");
    }

    return 0;
}