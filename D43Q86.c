/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, flag = 0;

    // Input string from user
    printf("Enter a string: ");
    gets(str);

    // Step 1: Find the length of the string manually
    while (str[len] != '\0') {
        len++;
    }

    // Step 2: Compare characters from both ends
    for (i = 0; i < len / 2; i++) {
        // If characters don't match, it's not a palindrome
        if (str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    // Step 3: Print result based on flag
    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
