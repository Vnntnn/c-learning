#include <stdio.h>


int main() {
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    int lnum[] = {n1, n2, n3};
    int cnum[] = {0, 0, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (lnum[i] == lnum[j]) {
                cnum[i]++;
            }
        }
    }

    if (cnum[0] == 3) {
        printf("all the same");
    } else if (cnum[0] == 2) {
        printf("neither");
    } else {
        printf("all different");
    }

    return 0;
}