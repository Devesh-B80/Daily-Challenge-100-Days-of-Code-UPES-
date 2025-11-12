/*Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Step 1: Input the string
    printf("Enter a string: ");
    gets(str);

    // Step 2: Traverse each character of the string
    for (i = 0; str[i] != '\0'; i++) {
        // Step 3: Replace space with hyphen
        if (str[i] == ' ')
            str[i] = '-';
    }

    // Step 4: Print the modified string
    printf("Modified string: %s\n", str);

    return 0;
}
