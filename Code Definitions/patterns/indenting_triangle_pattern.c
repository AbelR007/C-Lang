// Indenting Triangle Pattern
// ----------------------------------------------------------------
// Code for drawing a Triangle structure with indentation and using loops
// ================================================================
#include<stdio.h>

void main() // Main function
{
    printf("Code for Indenting a Triangle\n\n");

    // Two nested loops for drawing triangle by row and column pattern
    int r,c,sp;
    int rows=10,cols=10;
    for (c = 1; c <= cols; c++)
    {
        printf("\t");
        for (sp=cols;sp>=c;sp--)
            printf(" ");
        for (r = 1; r <= c; r++)
        {
            printf("*");
        }
        // So, that the line changes every time a row is printed
        printf("\n");
    }
}
// =============================================================================
// Code by Abel Roy //
