// Factorial of a Number using Loops
// ----------------------------------------------------------------
// Product of an integer and all the integers below it

// Main library
#include<stdio.h>

// Main function
void main()
{
    printf("FACTORIAL of a Number\n-------------------------------\n");

    // Initialize the variables
    int num, l;
    int fact = 1;
    // Taking input from user
    printf("Enter number :");
    scanf("%d", &num);

    // Using Loop to calculate factorial
    for (l=1; l<=num; l++)
    {
        fact = fact * l;
    }
    printf("Factorial of %d is %d",num, fact);
}

// Code by Abel Roy | AbelR007 //
