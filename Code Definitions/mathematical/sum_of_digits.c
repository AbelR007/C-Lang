/* Calculating sum of digits of a number */
// =================================================================
#include<stdio.h>
#include<conio.h>

// Main function
void main(){
    // Initialize the variables
    int num, sum = 0, i;
    int copy = num;

    // Taking input
    printf("Enter Number to calculate sum : ");
    scanf("%d", &num);

    // Loop to calculate sum of the digits
    for (i=1 ; i <= 3; i++){
        sum = sum + num%10;
        num = num/10;
    }

    // Printing the sum
    printf("Sum of digits %d is %d",copy,sum);
}
// =================================================================
/* Code by Abel Roy */
