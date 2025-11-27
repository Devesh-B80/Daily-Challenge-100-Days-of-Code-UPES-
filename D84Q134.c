/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/
//solution:-
#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    enum Status code;

    printf("Enter status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", input);

    // Convert string → enum
    if (strcmp(input, "SUCCESS") == 0)
        code = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        code = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        code = TIMEOUT;
    else {
        printf("Invalid status!\n");
        return 1;
    }

    // Output message
    switch (code) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
