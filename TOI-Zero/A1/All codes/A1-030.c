#include <stdio.h>


int main() {
    int num, total = 0;
    int arr[100];
    
    scanf("%d", &num);
    
    for (int i = 0; i < num; i++) {
        int fn, sn;

        scanf("%d %d", &fn, &sn);

        if (fn > sn) {
            arr[i] = fn;
        } else {
            arr[i] = sn;
        }
    }

    if (num == 1) {
        printf("%d", arr[0]);
    } else {
        for (int j = 0; j < num; j++) {
            total += arr[j];
            printf("%d", arr[j]);
            if (j == num - 1) {
                printf(" = ");
            } else {
                printf(" + ");
            }
        }
        printf("%d", total);
    }

    return 0;
}