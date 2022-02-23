// Making a specific code output -> "snake"
// -----------------------------------------------------------------
/*
    OUTPUT:
    --------------------
    ..***
    ..*..
    ..*..
    ..*..
    ***..
    --------------------
*/
// =================================================================
#include<stdio.h>
void main() // Main function
{
    int r, c; // Variables
    for (r = 1; r <= 5; r++) // Row loop
    {
        for (c = 1; c <= 5; c++) // Column loop
        {
            // "If" loop for printing the snake
            if ((c>=3&&r==1) || (c==3) || (c<=3&&r==5))
                printf("*");
            else
                printf(".");
        }
        printf("\n"); // Newline "\n"
    }
}
// =================================================================
// Code by Abel Roy //
