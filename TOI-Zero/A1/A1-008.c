#include <stdio.h>
#include <string.h>


int main() {
    char c_id[200];

    scanf("%s", c_id);

    if (strlen(c_id) == 13) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}