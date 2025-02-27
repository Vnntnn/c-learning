// Write a C program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative and greater than 80.
#include <stdio.h>

int main() {
    int num;

    printf("Input an integer: "); 
    scanf("%d", &num);

    if(num >=0 && num <= 20)
    {
        printf("Range [0, 20]");
    } 
    else if(num >= 21 && num <= 40)
    {
        printf("Range (21,40]");
    } 
    else if(num >=41 && num <= 60)
    {
        printf("Range (41,60]");
    } 
    else if(num >61 && num <= 80)
    {
        printf("Range (61,80]");
    } 
    else 
    {
        printf("Error, Number out of range.");
    }

    return 0;
}
