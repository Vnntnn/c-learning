#include <stdio.h>


int main() {
    int nums[3];
    int k = 0;

    while (k < 3)
    {
        scanf("%d", &nums[k]);
        k++;
    }

    // sorting list with insertion sort (accen -> decen)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    printf("%d", nums[0]);

    return 0;
}
