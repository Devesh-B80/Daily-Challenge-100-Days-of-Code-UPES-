/*Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/
//solution:-
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe, but used here for simplicity

    // Count characters manually without using strlen()
    while (str[count] != '\0') {
        count++;
    }

    // Display result
    printf("Number of characters: %d\n", count);

    return 0;
}
