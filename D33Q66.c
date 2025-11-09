/*Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
//solution:-
#include <stdio.h>

int main() {
    int n, i, num, pos = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &num);

    // Find position to insert
    while (pos < n && arr[pos] < num)
        pos++;

    // Shift elements to the right
    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = num; // Insert new element
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
