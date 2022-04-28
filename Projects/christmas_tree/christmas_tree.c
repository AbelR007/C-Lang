// CHRISTMAS Tree
// ----------------------------------------------------------------
// Using Pyramid structures, and a trunk [with loops]

#include<stdio.h>

void main() // Main Function
{
    printf(
        "   Merry Christmas \n"
        " ------------------\n"
    );
    for (int ch = 1; ch <= 3; ch++)
    {
        int nsp = 1;
        for (int tc = 1; tc <= 5; tc++)
        {
            for (int sp = 5; sp >= nsp; sp--)
            {
                printf(" ");
            }
            for (int tr = 1; tr <= tc; tr++)
            {
                printf("*");
            }
            nsp = nsp + 1;
            for (int mr = 1; mr <= tc; mr++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    for (int tr = 1; tr <= 4; tr++)
    {
        printf("    ");
        for (int tc = 1; tc <= 4; tc++)
        {
            printf("*");
        }
        printf("\n");
    }
}

// Code by Abel Roy //
