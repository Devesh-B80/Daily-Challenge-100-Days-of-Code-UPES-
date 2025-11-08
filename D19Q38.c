//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
//solution:-
#include <stdio.h>

int main() {
    int n, sum = 0, rem;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum of digits
    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    // Output
    printf("%d\n", sum);

    return 0;
}
