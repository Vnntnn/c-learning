// Reverse chars X,M,L
#include <stdio.h>
#include <string.h>


int main()
{
    char nonReversed[] = "XML";
    int length = strlen(nonReversed);
    char reversed[length + 1];

    for (int i = 0; i < length; i++)
    {
        reversed[i] = nonReversed[length - 1 - i];
    }
    reversed[length] = '\0';

    printf("The reverse of %s is %s", nonReversed, reversed);

    return 0;
}
