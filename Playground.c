// 0
/*
Problem 0: Calculate the Average of N Numbers

Write a program in C to calculate the average of N numbers entered by the user. Your program should:

    Prompt the user to enter the total number of values, N (must be a positive integer).
    Dynamically allocate memory to store N numbers using pointers.
    Allow the user to input N numbers.
    Calculate and display the average of the entered numbers.
    Free the allocated memory after use.

    Input:
    Enter the number of elements: 5  
    Enter the numbers: 10 20 30 40 50
    Ouput:
    The average is: 30.00  

    Code down below:
    #include <stdio.h>

    int main() {
        int num;

        printf("The number of elements: ");
        scanf("%d", &num);

        int array[num];  // Array lenght
        printf("The numbers: ");
        for (int j = 0; j < num; ++j) {
            scanf("%d", &array[j]);
        }

        int avg = 0;
        for (int i = 0; i < num; i++) {
            avg += array[i];
        }

        float size_avg = avg / num;
        printf("The average is: %.2f", size_avg);

        return 0;
    }
*/


// 1
/*
Problem 1: Find the Largest Number in an Array

Write a program in C to find the largest number in an array of integers entered by the user.

Requirements:

    Ask the user for the number of elements.
    Dynamically allocate memory for the array using pointers.
    Input the elements from the user.
    Find and print the largest number.
    Free the allocated memory after use.

    Input:
    Enter the number of elements: 5  
    Enter the numbers: 12 45 7 90 23  
    Ouput:
    The largest number is: 90  

    Code down below:
    #include <stdio.h>

    int main() {
        int num;
        printf("Enter the number of elements: ");
        scanf("%d", &num);

        int array[num];
        printf("Enter the numbers: ");
        for (int i = 0; i < num; ++i) {
            scanf("%d", &array[i]);
        }

        int max;
        for (int j; j < num; j++) {
            if (max < array[j]) {
                max = array[j];
            }
        }

        printf("The largest number is: %d", max);
    }
*/

//2
/*
Problem 2: Reverse a String

Write a program in C to reverse a string entered by the user.

Requirements:

    Input a string from the user (maximum 100 characters).
    Reverse the string without using any library functions like strrev().
    Print the reversed string.

    Input:
    Enter a string: hello
    Output:
    Reversed string: olleh

    code down below
    #include <stdio.h>
    #include <string.h>

    int main() {
        char text[101];
        printf("Enter a string: ");
        scanf("%s", text);

        char newtext[101] = "";
        int len = strlen(text);

        for (int i = len - 1; i >= 0; i--) { // ย้อนข้อความ
            int pos = len - 1 - i;
            newtext[pos] = text[i];
        }
        newtext[len] = '\0';

        printf("Reversed string: %s\n", newtext);
        return 0;
    }
*/

//3
/*
Problem 3: Count Vowels and Consonants

Write a program in C to count the number of vowels and consonants in a string entered by the user.

Requirements:

    Input a string (maximum 100 characters).
    Count vowels (a, e, i, o, u) and consonants.
    Ignore spaces, numbers, and special characters.

    Input:
    Enter a string: Hello World!  
    Output:
    Vowels: 3
    Consonants: 7
    code down below
*/

#include <stdio.h>

int main() {
    char str[101];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
