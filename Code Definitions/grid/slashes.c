// SLASHES using "Grid system"
// ----------------------------------------------------------------
#include<stdio.h>
void main()
{
    int rows = 20; // total number of rows
    int cols = 20; // total number of columns
    for (int r = 1; r <= rows; r++)
    {
        for (int c = 1; c < cols; c++)
        {
            if ((r+c==20)||(r==c))
                printf("%2d",r);
            else
                printf("  ");
        }
        printf("\n");
    }
}
// ----------------------------------------------------------------
// Code by Abel Roy //
