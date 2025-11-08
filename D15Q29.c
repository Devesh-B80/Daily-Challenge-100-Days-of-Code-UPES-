//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
//solution:-
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1; // long long to handle large results

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    // Output
    printf("%lld\n", fact);

    return 0;
}
