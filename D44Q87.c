/*Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i, spaces = 0, digits = 0, special = 0;

    // Input string from user
    printf("Enter a string: ");
    gets(str);

    // Step 1: Loop through each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        // Step 2: Check if the character is a space
        if (str[i] == ' ')
            spaces++;
        // Step 3: Check if the character is a digit
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        // Step 4: Check if the character is special (not letter, not digit, not space)
        else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z')))
            special++;
    }

    // Step 5: Display the counts
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
