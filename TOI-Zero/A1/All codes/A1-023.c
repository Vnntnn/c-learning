#include <stdio.h>


int main() {
    int n_tem;
    char tem;

    scanf("%d %c", &n_tem, &tem);

    if (tem == 'C' || tem == 'c') {
        if (n_tem < 0) {
            printf("solid");
        } else if (n_tem > 100) {
            printf("gas");
        } else if (n_tem >= 0 && n_tem <= 100) {
            printf("liquid");
        }
    } else if (tem == 'F' || tem == 'f') {
        if (n_tem < 32) {
            printf("solid");
        } else if (n_tem > 212) {
            printf("gas");
        } else if (n_tem >= 32 && n_tem <= 212) {
            printf("liquid");
        }
    }

    return 0;

}