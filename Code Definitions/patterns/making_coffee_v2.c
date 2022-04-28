// Making "COFFEE" using a For Loop

#include<stdio.h>

void main()
{
    int l;
    for (int l = 1; l <= 42; l++)
    {
        if (l < 7)
            printf("%3d",l);
        else
        {
            if (l <= 14)
                printf("%3d\n",l);
            else
            {
                if (l <= 21)
                    printf("%3d",l);
                else
                {
                    if (l == 22) // to give space between letters
                        printf("\n\n");
                    if (l <= 28)
                        printf("%3d",l);
                    else
                    {
                        if (l == 29)
                            printf("\n");
                        if (l <= 35)
                            printf("%3d               %3d\n",l,l);
                        else
                        {
                            if (l == 43)
                                printf("%3d",l);
                            else
                            {
                                if (l <= 42)
                                    printf("%3d",l);
                            }
                        }
                    }
                }
            }
        }
        //     else
        //         if (l <= 21)
        //             printf("%2d",l);
        //         else
        //             // printf("\n");
        //             if (l == 22)
        //                 printf("\n");
        //             if (l <= 28)
        //                 printf("%2d",l);
        //             else
        //                 if (l <= 35)
        //                     printf("%2d",l);
        //                 else
        //                     printf("%2d",l);

    }
    getchar();
}
