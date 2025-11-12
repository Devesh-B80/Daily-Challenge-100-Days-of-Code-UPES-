/*Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;

    // Step 1: Input the string
    printf("Enter a string: ");
    gets(str); // Note: unsafe but acceptable for simple programs

    len = strlen(str); // Step 2: Find the length of the string

    // Step 3: Generate and print all substrings
    printf("All substrings are:\n");
    for(i = 0; i < len; i++) {           // Starting point
        for(j = i; j < len; j++) {       // Ending point
            for(k = i; k <= j; k++) {    // Print characters from i to j
                printf("%c", str[k]);
            }
            // Add comma after each substring except the last
            if(!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }
    printf("\n");

    return 0;
}
