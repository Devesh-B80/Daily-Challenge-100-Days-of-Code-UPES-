//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
//solution:-
#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Reverse the number
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // Output
    printf("%d\n", rev);

    return 0;
}
