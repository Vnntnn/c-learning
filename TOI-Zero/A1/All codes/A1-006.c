#include <stdio.h>


int main() {
    int fnum, snum;

    scanf("%d\n%d", &fnum, &snum);

    if (fnum % snum == 0) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}