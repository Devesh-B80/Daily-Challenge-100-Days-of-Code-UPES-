/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
//solution:-
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    int sum = 0;

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) {
                sum += a[i][j]; // Add main diagonal element
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
