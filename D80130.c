/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/
//solution:-
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    int n, i;

    // Ask how many students
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Write to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    // Read back from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    struct Student temp;

    // Read and display until EOF
    while (fscanf(fp, "%s %d %d", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               temp.name, temp.roll, temp.marks);
    }

    fclose(fp);
    return 0;
}
