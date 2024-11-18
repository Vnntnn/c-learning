/*
*While...loop
While is looping until codition is correctly
Code structure:
while (expression) {
    Code block
}

__EX__
#include <stdio.h>

int main() {
    int num = 0;

    while (num < 11) {
        printf("%d\n", num); # Output: 0 1 2 3 4 5 6 7 8 9 10
        ++num;
    }
    return 0;
}

*do...while
do..while is while loop but execute the code block at least once before checking loop condition.
code structure:
do {
  code block
}
while (condition);

__EX__
#include <stdio.h>

int main() {
  int i = 0;
  
  do {
    printf("%d\n", i); # Output: 0 1 2 3 4
    i++;
  }
  while (i < 5);
  
  return 0;
}

*/
