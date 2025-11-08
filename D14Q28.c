//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
//solution:-
#include <stdio.h>
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;

    // Input
    printf("Enter n: ");
    scanf("%d", &n);

    printf("(");
    int first = 1; // to handle '*' printing nicely

    // Calculate and display product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
        if (!first)
            printf(" * ");
        printf("%d", i);
        first = 0;
    }

    printf(")\n");

    // Output final product
    printf("Product = %lld\n", product);

    return 0;
}
