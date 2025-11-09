/*Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
//solution:-
#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations (k): ");
    scanf("%d", &k);

    k = k % n; // To handle k > n
    int temp[k];

    // Store last k elements
    for (i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    // Shift the remaining elements to the right
    for (i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    // Copy back the stored elements
    for (i = 0; i < k; i++)
        arr[i] = temp[i];

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
