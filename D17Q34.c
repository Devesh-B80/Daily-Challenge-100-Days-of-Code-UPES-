//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
//solution:-
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle numbers less than 2
    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    // Check divisibility
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Output result
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
