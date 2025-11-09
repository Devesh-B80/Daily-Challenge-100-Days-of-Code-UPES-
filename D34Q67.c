/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
//solution:-
#include <stdio.h>

int main() {
    int n, i, pos, num;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // Extra space for new element

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &num);

    // Shift elements to the right from the given position
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = num; // Insert element (position is 1-based)
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
