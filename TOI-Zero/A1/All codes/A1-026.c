#include <stdio.h>


int main() {
    int num[3], e = 0, o = 0;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    

    for (int i = 0; i < 3; i++)
    {
        if (num[i] % 2 == 0) {
            e += 1;
        } else {
            o += 1;
        }
    }

    printf("even %d\nodd %d", e, o);

    return 0;
}