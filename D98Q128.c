/*Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same
*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to compare two students
int areEqual(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
        return 1;  // identical
    else
        return 0;  // not identical
}

int main() {
    struct Student s1, s2;

    // Input Student 1
    printf("Enter details of Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input Student 2
    printf("\nEnter details of Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare
    if (areEqual(s1, s2))
        printf("\nSame\n");
    else
        printf("\nNot Same\n");

    return 0;
}
