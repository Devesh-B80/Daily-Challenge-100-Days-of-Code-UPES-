//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
//solution:-
#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // Taking input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // Conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    
    // Displaying result
    printf("Fahrenheit=%.0f\n", fahrenheit);
    
    return 0;
}
