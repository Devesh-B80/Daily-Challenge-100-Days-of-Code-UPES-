/*Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/
//SOLUTION:-
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n, i, topper_index = 0;
    printf("Enter number of students: ");
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

    // Find topper
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topper_index].marks)
            topper_index = i;
    }

    // Print topper
    printf("\nTopper: %s (Marks: %.0f)\n",
           students[topper_index].name,
           students[topper_index].marks);

    return 0;
}
