//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
//solution:-
#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, swapped;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;                     // extract last digit
    digits = (int)log10(n);            // total digits - 1
    first = n / pow(10, digits);       // extract first digit

    // swap logic
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits)) / 10 * 10 + first;

    // Output
    printf("%d\n", swapped);

    return 0;
}
