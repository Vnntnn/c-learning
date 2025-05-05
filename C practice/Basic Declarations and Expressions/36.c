#include <stdio.h>

int main() {
    int pass = 1234, in_pass;

    printf("Input the password ");
    scanf("%d", &in_pass);
    if (in_pass == pass) {
        printf("Correct password");
    } else {
        printf("Incorrect password");
    }
    return 0;
}