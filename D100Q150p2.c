/*Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/
//SOLUTION:-
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    // IMPORTANT STATEMENTS
    printf("Using pointer to struct and -> operator.\n");
    printf("Pointer is assigned to structure variable.\n");

    // EXACT input prompt required by your question
    printf("Student pointer modifying values: ");

    // Read values safely
    scanf("%49s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    // EXACT output format (do not add extra newlines)
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
