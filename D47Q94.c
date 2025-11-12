/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
//solution:-
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    // Step 1: Input the sentence
    printf("Enter a sentence: ");
    gets(str);

    // Step 2: Traverse each character in the string
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            // Build the current word character by character
            word[j++] = str[i];
        } else {
            // End of a word
            word[j] = '\0';  // Null terminate the current word

            // Step 3: Compare length with the longest word found so far
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0; // Reset for the next word

            // Stop loop if end of string is reached
            if (str[i] == '\0')
                break;
        }
        i++;
    }

    // Step 4: Display the longest word
    printf("%s\n", longest);

    return 0;
}
