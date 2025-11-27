/*Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/
//SOLUTION:-
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find topper and return it
struct Student findTopper(struct Student students[], int n) {
    int i, topper_index = 0;
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topper_index].marks)
            topper_index = i;
    }
    return students[topper_index];
}

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Get topper
    struct Student topper = findTopper(students, n);

    // Print topper
    printf("\nTop Student: %s | Roll: %d | Marks: %.0f\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}
