/*Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    // Step 1: Input the string
    printf("Enter a string: ");
    gets(str);

    // Step 2: Input the character to count
    printf("Enter the character to find frequency: ");
    scanf("%c", &ch);

    // Step 3: Traverse the string to count occurrences of the character
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    // Step 4: Display the frequency
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
