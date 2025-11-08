//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
//solution:-
#include <stdio.h>

int main() {
    int n, sum;
    
    // Taking input
    printf("Enter n: ");
    scanf("%d", &n);
    
    // Formula for sum of first n natural numbers
    sum = n * (n + 1) / 2;
    
    // Displaying result
    printf("Sum=%d\n", sum);
    
    return 0;
}
