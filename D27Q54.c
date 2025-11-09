/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
//solution:-
#include <stdio.h>

int main() {
    int i, j, space;

    // Upper half of the diamond
    for(i = 1; i <= 4; i++) {
        for(space = 4; space > i; space--) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for(i = 3; i >= 1; i--) {
        for(space = 4; space > i; space--) {
            printf(" ");
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
