/*Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/
//SOLUTION:-
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("SUCCESS = %d, ", SUCCESS);
    printf("FAILURE = %d, ", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}
