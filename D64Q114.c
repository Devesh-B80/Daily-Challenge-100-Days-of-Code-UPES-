/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/
//solution:-
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastIndex[256];
    int maxLen = 0, start = 0;

    // Interaction line
    printf("Enter a string: ");
    scanf("%s", s);

    // Initialize last index array
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    // Sliding window technique
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = s[i];

        // If character was seen in current window, move start
        if (lastIndex[ch] >= start)
            start = lastIndex[ch] + 1;

        // Update last seen index
        lastIndex[ch] = i;

        // Update max length
        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
