/*
Break like a Python it's just instantly stop looping when executed to break line
While loop __EX__
#include <stdio.h>

int main() {
    int num;
    while (num < 4) {
        if (num == 2) {
            break;
        }
        printf("%d", num);
        num++;
    }
    printf("%d", num);
}

For loop __EX__
#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }
   
  return 0;
}

*/

