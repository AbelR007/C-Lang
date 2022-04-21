// Hockey Stick using "Grid system"
// ----------------------------------------------------------------
#include<stdio.h>
void main()
{
    // Specify total number of rows and columns
    int rows = 10, cols = 10;
    for (int r = 1; r <= rows; r++)
    {
        for (int c = 1; c <= cols; c++)
        {
            if (r==1 || c==cols/2 || ((c==1)&&(r>=rows/2)) || ((r==rows) &&(c<=cols/2)))
                printf("%2d",r);
            else
                printf("  ");
        }
        printf("\n");
    }
}
// ----------------------------------------------------------------
// Code by Abel Roy //
