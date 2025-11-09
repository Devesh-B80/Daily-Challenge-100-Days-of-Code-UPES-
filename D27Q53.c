/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
//solution:-
#include <stdio.h>

int main() {
    int i, j;

    // Upper half of the pattern
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for(i = 4; i >= 1; i--) {
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
