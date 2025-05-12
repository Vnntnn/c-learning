#include <stdio.h>


int main() {
    int age;
    char status;

    scanf("%d\n%c", &age, &status);

    if (age < 18 || status == 's' || status == 'S') {
        printf("20");
    } else {
        printf("50");
    }

    return 0;
}