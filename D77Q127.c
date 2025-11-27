/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING
*/
//solution:-
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file in read mode
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file in write mode
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read from input.txt and write uppercase to output.txt
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;  // convert to uppercase
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("File converted successfully.\n");
    return 0;
}
