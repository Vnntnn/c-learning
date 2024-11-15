/*
To declaring variables you need to specify type and assign a value.
Format: | type | varname | = | value | ; |
    __EX__ 
    > int number = 77;

    You can declared and assigning the value later like this
    > int number;
    > number = 77;

    You can change variable value later like this
    > int number = 77;
    > number = 65; // now number value is 65

    You can declare multiple variables like this too for more shorten code
    > int x = 5, y = 5, z = 5;
    or:
    > int x,y,z
    > x = y = z = 50;

    but when you printf you can't do things like this.
    __EX__ 
    > printf(number); # Error
    It's not like Python because in C you need to know somthings about "Format specifiers" in next chapter.
*/

// __EX__
#include <stdio.h>

void plus() {
    int x = 6, y = 7, z = 8;
    printf("%d", x + y + z);
}

int main() {
    plus();
    return 0;
}

//------------------------END--------------------------//
