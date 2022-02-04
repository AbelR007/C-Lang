// PRIME NUMBER or COMPOSITE NUMBER
// ----------------------------------------------------------------
#include<stdio.h>
void main()
{
    // Initialize the variables
    int num;
    int prime = 1;

    // Taking Input
    printf("Enter a number : ");
    scanf("%d", &num);

    // Checks if the number is prime or not
    for (int all = 2; all < num; all++)
    {
        // printf("%d|%d|%d\n",num,i, num%i); // Use this code to check for all numbers
        if ((num % all) == 0)
        {
            // printf(">%d-%d\n",num,i);
            prime = 0;
        }
    }

    // Prints out the result
    if (prime == 1)
        printf("%d is a Prime Number",num);
    if (prime == 0)
        printf("%d is a Composite Number",num);

    // Shows the cursor position
    getch();
}
// ----------------------------------------------------------------
// Code by Abel Roy //
