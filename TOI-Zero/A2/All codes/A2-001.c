#include <stdio.h>


int main() {
    int *p1 = 0, *p2 = 0;
    int r, b;

    scanf("%d %d", &r, &b);

    int refr[r];
    int refb[b];

    for (int i = 0; i < r; i++) {
        int b;

        scanf("%d", &b);
        
        refr[i] = b;
    }

    
}