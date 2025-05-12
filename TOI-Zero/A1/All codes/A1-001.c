#include <stdio.h>


int main() {
    char fname[20], lname[20];

    scanf("%s\n%s", &fname, &lname);

    printf("Hello %s %s\n", fname, lname);
    printf("%c%c%c%c", fname[0], fname[1], lname[0], lname[1]);

    return 0;
}
