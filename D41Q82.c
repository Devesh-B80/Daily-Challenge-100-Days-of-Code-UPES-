/*Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string from the user
    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe but simple for beginner-level use

    // Print each character on a new line
    printf("Characters in the string:\n");
    while (str[i] != '\0') {  // Loop until the null terminator
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
