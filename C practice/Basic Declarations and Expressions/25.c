// Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
#include <stdio.h>

int main() {
    int num;
    char *month[] = {"January", "February", "March", "April", "May",
                      "June", "July", "August", "September", "October", 
                      "November", "December"};

    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d", &num);

    printf("%s", month[num - 1]);

    return 0;
}
