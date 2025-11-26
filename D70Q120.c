/*Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/
//solution:-
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    // Interaction line
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    int capitalize = 1;  // flag to capitalize the next letter

    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);   // capitalize first letter of a word
            capitalize = 0;
        }
        else if (str[i] == ' ') {
            capitalize = 1;  // next character after space must be capitalized
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
