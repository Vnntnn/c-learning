#include <stdio.h>


int main() {
    int n;

    scanf("%d", &n);
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (arr[j] < arr[k]) {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }

    printf("%d", arr[0]);

    return 0;
}