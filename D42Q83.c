/*Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    // Input string from user
    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe but fine for simple learning examples

    // Traverse each character until null terminator '\0'
    while (str[i] != '\0') {
        char ch = str[i];

        // Check if character is an alphabet (A-Z or a-z)
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {

            // Convert uppercase to lowercase for easier comparison
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;

            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    // Display result
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
