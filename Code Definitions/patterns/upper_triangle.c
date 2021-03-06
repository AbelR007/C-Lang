// Upper Triangle using For Loops
// ----------------------------------------------------------------
// Code for drawing a Triangle structure using loops
// ================================================================
#include<stdio.h>

void main() // Main function
{
    printf("Code for Upper Triangle.\n\n");

    // Two nested loops for drawing triangle by row and column pattern
    for (int c = 5; c >= 1; c--)
    {
        for (int r = 1; r <= c; r++)
        {
            printf("*");
        }
        // So, that the line changes every time a row is printed
        printf("\n");
    }
}
// =============================================================================
// Code by Abel Roy //
