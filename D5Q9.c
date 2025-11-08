//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
//solution:-
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // Taking input
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculating Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Calculating Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // Displaying results (rounded to 2 decimal places)
    printf("Simple Interest=%.2f, Compound Interest=%.2f\n", simple_interest, compound_interest);

    return 0;
}
