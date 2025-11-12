/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
//solution:-
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    // Step 1: Input the full name
    printf("Enter your full name: ");
    gets(name);

    // Step 2: Find the last space — it marks the start of the surname
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;  // store position of last space
        }
    }

    // Step 3: Print initials for all names except the last one
    if (name[0] != ' ') {
        printf("%c.", name[0]);  // first initial
    }

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);  // middle name initials
        }
    }

    // Step 4: Print the surname (after the last space)
    if (lastSpace != -1) {
        printf(" %s", &name[lastSpace + 1]);
    }

    printf("\n");
    return 0;
}
