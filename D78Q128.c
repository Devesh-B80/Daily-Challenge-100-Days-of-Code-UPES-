/*Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/
//solution:-
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    // Get filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {   // only alphabets
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    // Output
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
