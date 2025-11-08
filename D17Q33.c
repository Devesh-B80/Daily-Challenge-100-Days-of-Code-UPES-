//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
//solution:-
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, rem, count = 0;
    double sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    // Calculate sum of digits raised to power of count
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum += pow(rem, count);
        temp /= 10;
    }

    // Check Armstrong condition
    if ((int)sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
