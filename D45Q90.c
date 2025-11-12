/*Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Step 1: Input the string
    printf("Enter a string: ");
    gets(str);

    // Step 2: Traverse each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Step 3: If character is lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // Subtract 32 from ASCII value
        // Step 4: If character is uppercase, convert to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // Add 32 to ASCII value
    }

    // Step 5: Print the toggled string
    printf("Toggled string: %s\n", str);

    return 0;
}
