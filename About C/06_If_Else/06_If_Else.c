#include <stdio.h>
/*
Just logical mathematics :D
Code structure
if (condition) {

} else if (conditoion) {

} else {

}

*/

int main() {
    int number1 = 2;
    int number2 = 4;
    if (number2 >= number1) {
        printf("%d", number2);
    } else if (number2 <= number1) {
        printf("%d", number1);
    } else {
        printf("No!!!");
    }
}
// Excepted Output: 4

/*
So you can shorten your condition code like this too
(condition) ? code block : code block
\
*/
