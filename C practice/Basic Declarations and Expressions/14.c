// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) travelled (in km) and spent fuel (in litters, float number – 2 decimal points).
#include <stdio.h>


int main() {
    float dis, lits;

    printf("Input total distance in km: ");
    scanf("%f", &dis);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &lits);

    printf("Average consumption (km/lt) %.3f", dis / lits);

    return 0;
}
