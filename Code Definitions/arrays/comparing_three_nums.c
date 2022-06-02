/* Comparing three numbers and printing the largest element */
// =================================================
#include<stdio.h>
void main()
{
    int a = 1, b = 2, c = 3, largest;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The numbers in ascending order : ");
    if (a > b)
    {
        if (b > c)
            printf("%d %d %d", c, b, a);
        else
            if (c > a)
                printf("%d %d %d", b, a, c);
            else
                printf("%d %d %d", b, c, a);
    }
    else // a < b
    {
        if (c < a)
            printf("%d %d %d", c, a, b);
        else
            if (c > b)
                printf("%d %d %d", a, b, c);
            else
                printf("%d %d %d", a, c, b);
    }
}
// ================================================
/* Code by Abel Roy */
