/*Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
//SOLUTION:-
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Open binary file for writing
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input employee details and write to file
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp.name);
        printf("ID: ");
        scanf("%d", &emp.id);
        printf("Salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);

    // Open binary file for reading
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\n--- Employee Data from File ---\n");

    // Read and display employee details
    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("Name: %s | ID: %d | Salary: %.2f\n",
               emp.name, emp.id, emp.salary);
    }

    fclose(fp);

    return 0;
}
