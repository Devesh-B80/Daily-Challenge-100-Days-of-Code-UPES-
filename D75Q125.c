/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/
//solution:-
#include <stdio.h>

int main() {
    char filename[100];
    char text[500];
    FILE *fp;

    // Ask for filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error! Cannot open file.\n");
        return 1;
    }

    // Clear input buffer before fgets
    getchar();  

    // Get text from the user
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
