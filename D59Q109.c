/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400
*/
//solution:-
#include <stdio.h>

int main() {

    int n, k;

    // --- INPUT SECTION ---
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    // Check for invalid case
    if (k > n) {
        printf("Invalid: k cannot be greater than array size\n");
        return 0;
    }

    // --- SLIDING WINDOW APPROACH ---
    int windowSum = 0;

    // Sum of first window (0 to k-1)
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window from i = k to n-1
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];   // add new element, remove old
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    // --- OUTPUT ---
    printf("%d\n", maxSum);

    return 0;
}
