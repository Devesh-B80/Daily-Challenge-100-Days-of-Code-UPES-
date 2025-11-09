/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
//solution:-
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, digit, i, max = 0, result = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times: %d\n", result);

    return 0;
}
