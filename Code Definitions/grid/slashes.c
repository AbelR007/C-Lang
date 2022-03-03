// SLASHES using "Grid system"
// ----------------------------------------------------------------
#include<stdio.h>
void main()
{
    for (int r = 1; r <= 20; r++)
    {
        for (int c = 1; c < 20; c++)
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
