/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/
//Solution:-
#include <stdio.h>
#include <string.h>

enum Traffic {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[20];
    enum Traffic signal;

    // Get user input
    printf("Enter traffic signal (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    // Convert input to enum value
    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        signal = GREEN;
    else {
        printf("Invalid input!\n");
        return 1;
    }

    // Print action
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
    }

    return 0;
}
