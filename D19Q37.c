//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int a, b, num1, num2, temp, gcd, lcm;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    // Find GCD using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;

    // Output LCM
    printf("%d\n", lcm);

    return 0;
}
