/*
Like match case in python use this to executed many code block condition
*break is for end function
*default is for when there no match case
*
Code structure
switch (expression) {
  case x:
    code block
    break;
  case y:
    code block
    break;
  default:
    code block
}
*/
#include <stdio.h>

int main() {
    int day = 3;
    switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wendsday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    default:
        printf("Sunday"); 
    }
    return 0;
}
