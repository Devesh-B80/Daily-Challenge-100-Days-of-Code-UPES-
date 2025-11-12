/*Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    // Step 1: Input the string
    printf("Enter a string: ");
    gets(str);

    // Step 2: Traverse each character
    for (i = 0; str[i] != '\0'; i++) {
        // Step 3: Check if the character is NOT a vowel
        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
            // Step 4: Copy non-vowel characters to result
            result[j] = str[i];
            j++;
        }
    }

    // Step 5: Null terminate the result string
    result[j] = '\0';

    // Step 6: Print the string after removing vowels
    printf("String without vowels: %s\n", result);

    return 0;
}
