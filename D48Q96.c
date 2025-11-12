/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
//solution:-
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    // Function to reverse characters between start and end
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i, start = 0, end;

    // Step 1: Input the sentence
    printf("Enter a sentence: ");
    gets(str);

    int len = strlen(str);

    // Step 2: Traverse through the string
    for (i = 0; i <= len; i++) {
        // Step 3: When space or end of string is found, reverse that word
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;
            reverseWord(str, start, end);
            start = i + 1;  // Move start to next word
        }
    }

    // Step 4: Print the modified string
    printf("%s\n", str);

    return 0;
}
