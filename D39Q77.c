/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
//solution:-
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];

    // Read matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int isDistinct = 1;

    // Compare each diagonal element with others
    for (int i = 0; i < n && i < m; i++) {
        for (int j = i + 1; j < n && j < m; j++) {
            if (a[i][i] == a[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
