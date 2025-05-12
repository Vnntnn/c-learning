#include <stdio.h>


int main() {
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    int lnum[] = {n1, n2, n3};

    if (lnum[0] < lnum[1] & lnum[1] < lnum[2]) {
        printf("increasing");
    } else if (lnum[0] > lnum[1] & lnum[1] > lnum[2]) {
        printf("decreasing");
    } else {
        printf("neither");
    }

    return 0;
}