/* Calculating sum of digits of a number */
// =================================================================
#include<stdio.h>
#include<conio.h>

// Main function
void main(){
    // Initialize the variables
    int num, sum = 0, i,mod;

    // Taking input
    printf("Enter Number to calculate sum : ");
    scanf("%d", &num);
    int copy = num;

    // Loop to calculate sum of the digits
    for ( ; num > 0; num = num/10)
    {
        mod = num % 10;
        sum = sum + mod;
    }

    // Printing the sum
    printf("Sum of digits %d is %d",copy,sum);
}
// =================================================================
/* Code by Abel Roy */
