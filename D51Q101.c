/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
//solution:-
#include <stdio.h>

int main() {

    int n, target;

    // --- INPUT SECTION ---
    // Read the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    // Read array elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Read the target element to search
    printf("Enter target element: ");
    scanf("%d", &target);

    // --- SEARCH SECTION ---
    int first = -1, last = -1;

    // Find first occurrence of target
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;     // stop when found first match
        }
    }

    // Find last occurrence of target
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;     // stop when found last match
        }
    }

    // --- OUTPUT SECTION ---
    printf("First and Last Occurrence: %d,%d\n", first, last);

    return 0;
}
