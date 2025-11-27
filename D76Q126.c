/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!
*/
//solution:-
#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Ask for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening in read mode
    fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("----- File Content -----\n");

    // Read and display content character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    printf("\n------------------------\n");

    fclose(fp);
    return 0;
}
