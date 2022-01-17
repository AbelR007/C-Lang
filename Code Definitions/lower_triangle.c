// Lower Triangle
// ----------------------------------------------------------------
// Code for drawing a Triangle structure using loops

#include<stdio.h>

void main() // Main function
{
    printf("Code for Lower Triangle.\n\n");
    for (int c = 1; c <= 10; c++)
    {
        for (int r = 1; r <= c; r++)
        {
            printf("*");
        }
        // So, that the line changes every time a row is printed
        printf("\n");
    }
}

// Code by Abel Roy //
