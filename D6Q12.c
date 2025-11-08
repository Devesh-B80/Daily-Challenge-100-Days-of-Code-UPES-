//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
//solution:-
#include <stdio.h>

int main() {
    int num;
    
    // Taking input
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Checking number type using nested if–else
    if (num >= 0) {
        if (num == 0)
            printf("Zero\n");
        else
            printf("Positive\n");
    } else {
        printf("Negative\n");
    }
    
    return 0;
}
