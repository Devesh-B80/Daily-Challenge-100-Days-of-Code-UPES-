/*Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
//solution:-
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Step 1: Input two strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Step 2: Check if lengths are same
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Step 3: Concatenate first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Step 4: If second string is a substring of this new string → it’s a rotation
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
