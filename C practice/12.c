// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
#include <stdio.h>


int main() {
    char ID[10] = "";
    float work;
    float salary;

    printf("Input the Employees ID: ");
    scanf("%s", &ID);

    printf("Input the working hrs: ");
    scanf("%f", &work);

    printf("Salary amount/hr: ");
    scanf("%f", &salary);

    printf("Employees ID = %s\nSalary = U$ %f", ID, work * salary);

    return 0;

}
