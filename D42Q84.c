/*Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input string from user
    printf("Enter a string: ");
    gets(str);  // Reads full line input

    // Traverse each character of the string
    while (str[i] != '\0') {
        // Check if character is lowercase (a-z)
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Display the converted string
    printf("Uppercase string: %s\n", str);

    return 0;
}
