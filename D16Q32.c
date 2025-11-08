//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
//solution:-
#include <stdio.h>

int main() {
    int n, original, rev = 0, rem;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // Check palindrome
    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
