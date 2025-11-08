//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
//solution:-
#include <stdio.h>

int main() {
    int a, b;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    // Output HCF
    printf("%d\n", a);

    return 0;
}
