//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
//solution:-
#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, rem, sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Calculate sum of factorials of digits
    while (temp != 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    // Check if strong number
    if (sum == n)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
