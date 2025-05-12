#include <stdio.h>


int main() {
    char fname[20], lname[20], age[3];

    scanf("%s %s %s", fname, lname, age);

    int len_fname = 0;
    while (fname[len_fname] != '\0') {
        len_fname++;
    }

    int len_lname = 0;
    while (lname[len_lname] != '\0') {
        len_lname++;
    }

    if (len_fname > 5) {
        printf("%c%c%c%c", fname[0], fname[1], lname[len_lname - 1], age[1]);
    } else {
        printf("%c%s%c", fname[0], age, lname[len_lname - 1]);
    }

    return 0;
}