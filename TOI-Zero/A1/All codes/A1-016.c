#include <stdio.h>


int main() {
    char id[8];

    scanf("%s", id);

    if (id[2] == '1' & id[3] == '6') {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}