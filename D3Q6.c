//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
//solution:-
#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;
    
    // Displaying result
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}
