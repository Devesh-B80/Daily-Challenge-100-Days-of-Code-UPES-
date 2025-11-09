/*Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n1, n2, i, j, arr1[100], arr2[100], merged[200];

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array: ");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array: ");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
