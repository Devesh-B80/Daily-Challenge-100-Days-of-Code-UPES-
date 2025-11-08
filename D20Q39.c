//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
//solution:-
#include <stdio.h>

int main() {
    int n, rem, product = 1, hasOdd = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate product of odd digits
    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0) {     // check if odd
            product *= rem;
            hasOdd = 1;
        }
        n /= 10;
    }

    // If no odd digits found, product = 1 (as per question)
    printf("%d\n", product);

    return 0;
}
