/*
*For...loop
This is looping when you know exactly how many times of looping
Code sturcture:
 for (expression 1; expression 2; expression 3) {
  code block to be executed
}
Expression 1 init loop variable
Expression 2 loop condition
Expression 3 Updates the loop variable or performs another action after each loop iteration 

__EX__
#include <stdio.h>

int main() {
    int num = 0;
    int i;
    for (i = 0; i <= 5; i++) {
        printf("%d", num); # Output 012345
        num += 1;
    }
}

*/

/*
*Nested loop
Loop and looping that's all

__EX__
#include <stdio.h>

int main() {
    int num1;
    int i,j;
    for (i = 0; i <= 2; i++) {
        printf("%d", i); # Output 012
        num1 = 0;
        for (j = 0; j <= 5; j++) {
            printf("%d", num1); # Output 012345 
            num1 += 1;
        }
    }
    # Result: 001234510123452012345
}

*/
