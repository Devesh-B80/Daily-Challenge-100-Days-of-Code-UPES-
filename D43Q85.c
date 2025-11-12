/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;
    char temp;

    // Input string from user
    printf("Enter a string: ");
    gets(str);  // Reads the full line including spaces

    // Step 1: Find length of the string manually
    while (str[len] != '\0') {
        len++;
    }

    // Step 2: Reverse the string using swapping
    for (i = 0; i < len / 2; i++) {
        // Swap the ith character with (len - i - 1)th character
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Step 3: Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
