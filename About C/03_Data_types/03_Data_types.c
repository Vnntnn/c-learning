/* Let's me introduce about some data type in C.
    
    int = integer

    float = floating (6 - 7 decimals)

    double = floating(15 decimals)

    char = character(for a character)

    string = string(for whole or multiple character)

    void = for no value returning

    and more... search google for it, All above this literally using in common.

*/

/* If you understand data types from above then you need to know about format specifier
for printf data types.

    int = %d or %i

    float = %f or %F

    double = %lf

    char = %c

    string = %s

*/

//Example code
#include <stdio.h>

void main() {
    int myNum = 77;
    float myFloatNum = 65.555;
    double myDoubleNum = 77.77777777;
    char myLetter = 'N';
  
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%lf\n", myDoubleNum);
    printf("%c\n", myLetter);
}

//-----------------------------------------------------//

/*
*Character*
In this section i will let's you know somethings about `Char`

`Char` is a data type that can only store a single character. if you store more than one
it's will showing you a last character from value

If you want to store multiple characters or whole words, you need to use %s(string) format
__EX__
> char text[] = "Hello";
> printf("%s", text); # Output will be "Hello"

*TIP*
If you familiar to ASCII, It's can using in C too! like
A = 65
B = 66
C = 67 
in ASCII right? Then code

> char a = 65, b = 66, c = 67;
> printf("%c %c %c",a,b,c); # Output will be A B C
*/

//-----------------------------------------------------//

/*
*Decimals*
How to set decimal precision???
- No problem!!!, You can do it like code down below
> float myFloatNum = 4.444;
> printf("%.2f", myFloatNum); # showing 2 decimals

like this, If you want to change decimal you just change N of %.Nf format. That's all!!
*/

//-----------------------------------------------------//

/*
*Type Conversion*
In sometimes you maybe want to change type of variable from this value to this value.
__EX__
> int x = 5, y = 2;
> int sum = x / y;
> printf("%d", sum); # Output will be 2

But output it's need to be 2.5 right? output is 2 because 5 and 2 is int type then they working with int and output will be just 2,
If you want a right answer you need to know how to type conversion works.

There are 2 types of conversion in C:
*1./ Implicit Conversion(Auto)*
__EX__
> float myFloat = 6;
> print("%f", myFloat); # Output will be 6.000000

*2./ Explicit Conversion(Manual)*
__EX__
> int num1 = 5;
> int num2 = 2;
> float sum = (float) num1 / num2;
> printf("%.1f", sum); # Output will be 2.5
*/

//------------------------END--------------------------//
