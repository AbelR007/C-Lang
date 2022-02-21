// Making 'COFFEE' Vertically
// ----------------------------------------------------------------
// Using single for loop & if else blocks

// Main library
#include<stdio.h>

// Main function
void main()
{
    int c, o, f1, f2, e1, e2;

    // Printing "C"
    for (c = 1; c <=23; c++)
    {
        if (c < 9)
            printf("#",c);
        else
            if (c <= 14)
                printf("#\n",c);
            else
                printf("#",c);
    }
    printf("\n\n");

    // Printing "O"
    for (o = 1; o <=23; o++)
    {
        if (o <= 9)
            printf("#");
        else
        {
            if (o <= 14)
                printf("\n#\t#");
            else
            {
                if (o == 15)
                    printf("\n");
                printf("#");
            }
        }
    }
    printf("\n\n");

    // Printing "F"
    for (int f1 = 1; f1 <= 19; f1++)
    {
        if (f1 <= 9)
            printf("#");
        else
        {
            if (f1 <= 12)
                printf("\n#");
            else
            {
                if (f1 <= 16)
                    printf("#");
                else
                    printf("\n#");
            }
        }
    }
    printf("\n\n");

    for (int f2 = 1; f2 <= 19; f2++)
    {
        if (f2 <= 9)
            printf("#");
        else
        {
            if (f2 <= 12)
                printf("\n#");
            else
            {
                if (f2 <= 16)
                    printf("#");
                else
                    printf("\n#");
            }
        }
    }
    printf("\n\n");


    for (int e1 = 1; e1 <= 27; e1++)
    {
        if (e1 <= 9)
            printf("#");
        else
        {
            if (e1 <= 12)
                printf("\n#");
            else
            {
                if (e1 <= 15)
                    printf("#");
                else
                {
                    if (e1 <= 19)
                        printf("\n#");
                    else
                        printf("#");
                }
            }
        }
    }
    printf("\n\n");

    for (int e2 = 1; e2 <= 27; e2++)
    {
        if (e2 <= 9)
            printf("#");
        else
        {
            if (e2 <= 12)
                printf("\n#");
            else
            {
                if (e2 <= 15)
                    printf("#");
                else
                {
                    if (e2 <= 19)
                        printf("\n#");
                    else
                        printf("#");
                }
            }
        }
    }
}
// =================================================================
// CODE by ABEL ROY //
