/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0}; // To store frequency of each lowercase letter
    int i;

    // Step 1: Input the string
    printf("Enter a lowercase string: ");
    gets(str);

    // Step 2: Traverse the string
    for (i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';  // Convert character to index (0-25)

        // Step 3: Check if it’s a lowercase letter
        if (index >= 0 && index < 26) {
            freq[index]++;  // Increase count for this character

            // Step 4: If frequency becomes 2, it’s the first repeating one
            if (freq[index] == 2) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    // Step 5: If no repetition found
    printf("No repeating lowercase alphabet found.\n");

    return 0;
}
