#include <stdio.h>


int main() {
    char card[3];

    scanf("%s", &card);

    int idx = 1;

    if (card[0] == 'A') {
        printf("ace of ");
    } else if (card[0] == 'J') {
        printf("jack of ");
    } else if (card[0] == 'Q') {
        printf("queen of ");
    } else if (card[0] == 'K') {
        printf("king of ");
    } else if (card[0] == '1') {
        printf("10 of ");
        idx = 2;
    } else {
        printf("%c of ", card[0]);
    }

    if (card[idx] == 'D' || card[idx] == 'd') {
        printf("diamonds");
    } else if (card[idx] == 'H' || card[idx] == 'h') {
        printf("hearts");
    } else if (card[idx] == 'S' || card[idx] == 's') {
        printf("spades");
    } else {
        printf("clubs");
    }

    return 0;
}