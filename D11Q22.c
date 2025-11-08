//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
//solution:-
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percent;
    
    // Taking input
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);
    
    // Checking profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percent = (profit / costPrice) * 100;
        printf("Profit %.0f%%\n", percent);
    } 
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        percent = (loss / costPrice) * 100;
        printf("Loss %.0f%%\n", percent);
    } 
    else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
