#include <stdio.h>


int main() {
    int scores[3];

    for (int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++) {
        scanf("%d", &scores[i]);
    }

    if (scores[0] < 5) {
        printf("fail");
    } else if (scores[1] < 20) {
        printf("fail");
    } else if (scores[2] < 25) {
        printf("fail");
    } else {
        printf("pass");
    }

    return 0;
}