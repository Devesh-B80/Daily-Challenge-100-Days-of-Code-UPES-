/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/
//solution:-
#include <stdio.h>

int main() {
    int n;

    // Interaction line
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int freq[100000] = {0}; // assuming array values are within this range

    int repeated = -1;

    // Single iteration
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;      // mark visited
        if (freq[arr[i]] == 2) {  
            repeated = arr[i];
            break;            // stop as soon as duplicate is found
        }
    }

    printf("Repeated element: %d\n", repeated);

    return 0;
}
