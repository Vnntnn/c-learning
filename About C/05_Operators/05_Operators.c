/*
C divides the operators by this following groups

*- Arithmetic operators
*- Assignment operators
*- Comparison operators
*- Logical operators
*- Bitwise operators

*Arithmetic Operators*
Like common mathemetics operations 
 ____________________________________________________________

| +  Adds two values together                   __EX__ x + y |

| -  Subtracts one value from another           __EX__ x - y |

| *  Multiplies two values                      __EX__ x * y |

| /  Divides one value by another               __EX__ x / y |

| %  Returns the division remainder             __EX__ x % y |

| ++ Increases the value of a variable by 1     __EX__ ++x   |

| -- Decreases the value of a variable by 1     __EX__ --x   |
 ____________________________________________________________
*/

/*
*Example code:
> #include <stdio.h>
>
> int main() {
>   int x = 5;
>   printf("%d", ++x); # Output: 6 because ++x is increase value by 1 then 5 + 1
>   return 0;
> }
*/

/*
*Assignment Operators*
Assign values to variables. ( = )
 __________________________________________________________________________________________

| =                 (x = 77) == (x = 77)                                                   |

| +=                (x += 77) == (x = x + 77)           Plus                               |

| -=                (x -= 77) == (x = x - 77)           Substraction                       |

| *=                (x *= 77) == (x = x * 77)           Multiply                           |

| /=                (x /= 77) == (x = x / 77)           Divide                             |

| %=                (x %= 77) == (x = x % 77)           Mod                                |

- Below operators for bit operation mostly use for hardware things, Encryption, Bits access
__EX__ Turn on/off, Microcontroller and etc.                                               

| &=                (x &= 77) == (x = x & 77)           AND                                |

| |=                (x |= 77) == (x = x | 77)           OR                                 |

| ^=                (x ^= 77) == (x = x ^ 77)           XOR                                |

| >>=               (x >>= 77) == (x = x >> 77)         Shift bits to right side           |

| <<=               (x <<= 77) == (x = x << 77)         Shift bits to left side            |
 __________________________________________________________________________________________
*/

/*
*Example code:
> #include <stdio.h>
>
> int main() {
>   int x = 5;
>   x %= 3;
>   printf("%d", x); # Output: 2 because 5 % 3
>   return 0;
> }
*/

/*
*Comparison Operators*
Compare two values ex. x is greater than y, Use this for make decisions something (True = 1, False = 0)
 ____________________________________________________________

| ==        Equal to                        x == y           |

| !=        Not Equal                       x != y           |

| >         Greater than                    x > y            |

| <         Less than                       x < y            |

| >=        Greater than or equal to        x >= y           |

| <=        Less than or equal to           x <= y           |
 ____________________________________________________________
*/

/*
*Example code:
>#include <stdio.h>
>
> int main() {
>   int x = 5;
>   int y = 3;
>  
>   printf("%d", x >= y); # Output: 1 becasue True = 1
>   return 0;
> }
*/

/*
*Logical Operators*
Just logic gate operators (True = 1, False = 0)
 ____________________________________________________________

| &&        AND                      x < 5 && x < 10         |

| ||        OR                       x < 5 || x < 4          |

| !         NOT                      !(x < 5 && x < 10)      |
 ____________________________________________________________
*/

/*
*Example code:
> #include <stdio.h>
>
> int main() {
>   int x = 5;
>   int y = 3;
> 
>   printf("%d", !(x > 3 && x < 10)); # Output: 0 because ! inverse the output
>   return 0;
}
*/

// Code credit: w3school :D
