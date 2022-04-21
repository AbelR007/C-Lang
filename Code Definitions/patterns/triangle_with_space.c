#include<stdio.h>

void main()
{
    int count = 4;
    for (int c = 1; c <= count; c++)
    {
        for (int sp = count; c <= sp; sp--)
        {
            printf(" ");
        }
        for (int r = 1; r <= c; r++)
        {
            printf("%d",c+1-r);
        }
        printf("\n");
    }
}
