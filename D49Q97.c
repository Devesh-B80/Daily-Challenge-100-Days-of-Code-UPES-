/*Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
//solution:-
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i;

    // Step 1: Input the full name
    printf("Enter your full name: ");
    gets(name);

    // Step 2: Print the first character as the first initial
    if (name[0] != ' ') {
        printf("%c.", name[0]);
    }

    // Step 3: Traverse through the string to find spaces
    for (i = 1; name[i] != '\0'; i++) {
        // Step 4: If a space is found and the next character is not a space or '\0'
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]); // Print the next character as an initial
        }
    }

    printf("\n");
    return 0;
}
