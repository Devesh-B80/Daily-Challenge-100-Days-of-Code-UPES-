/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // ✅ Needed for atoi()

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char monthName[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int m;

    // Step 1: Input date in dd/mm/yyyy format
    printf("Enter date (dd/mm/yyyy): ");
    gets(date);  // Note: gets() is unsafe, but acceptable for simple exercises

    // Step 2: Extract day, month, year
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    // Step 3: Convert month string ("04") to integer (4)
    m = atoi(month);

    // Step 4: Print new format dd-MMM-yyyy
    printf("%s-%s-%s\n", day, monthName[m - 1], year);

    return 0;
}
