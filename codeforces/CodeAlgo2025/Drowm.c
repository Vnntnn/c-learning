#include <stdio.h>

struct Student {
    int x;
    int xt;
    int xh;
};

// sorting using insertion sort
void sort(struct Student arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].x > arr[j + 1].x || (arr[j].x == arr[j + 1].x && arr[j].xt > arr[j + 1].xt)) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, m, h, t, p;

    scanf("%d %d %d %d %d", &n, &m, &h, &t, &p);

    struct Student nm[n][m];

    for (int i = 0; i < m; i++) {
        int x, xt, xh;
        scanf("%d %d %d", &x, &xt, &xh);
        nm[n - 1][i].x = x;
        nm[n - 1][i].xt = xt;
        nm[n - 1][i].xh = xh;
    }

    sort(nm[n - 1], m);

    int chk = 1;

    for (int i = 0; i < m; i++) {
        
        if (nm[n - 1][i].xh < (nm[n - 1][i].xt * p)) {
            chk = 0;
        }

    }

    return 0;

}
