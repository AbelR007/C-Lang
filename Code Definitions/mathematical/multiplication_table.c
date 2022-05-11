/* Multiplication Table */
// =================================================
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    // To get the multiplication table
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);
}
// ================================================
/* By Abel Roy */
