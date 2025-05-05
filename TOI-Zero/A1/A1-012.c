#include <stdio.h>


int main() {
    char num[2];
    char op;
    char rev_num[2];

    scanf("%s\n%c", num, &op);

    rev_num[0] = num[1];
    rev_num[1] = num[0]; 

    int original = (num[0] - '0') * 10 + (num[1] - '0');
    int reversed = (rev_num[0] - '0') * 10 + (rev_num[1] - '0');

    if (op == '+') {
        printf("%d + %d = %d", original, reversed, original + reversed);
    } else {
        printf("%d * %d = %d", original, reversed, original * reversed);
    }

    return 0;
}