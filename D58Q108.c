/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]
*/
//solution:-
#include <stdio.h>

int main() {

    int n;

    // --- INPUT SECTION ---
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];

    // --- PREFIX PRODUCT ---
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;   // store prefix product
        prefix *= nums[i];
    }

    // --- SUFFIX PRODUCT ---
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;  // multiply stored prefix with suffix
        suffix *= nums[i];
    }

    // --- PRINT OUTPUT ---
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i == n - 1)
            printf("%d", answer[i]);
        else
            printf("%d,", answer[i]);
    }
    printf("]\n");

    return 0;
}
