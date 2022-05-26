/* Fibonacci Series */
// =================================================
#include<stdio.h>
void main()
{
    int a = 0, b = 1, c, n;

    printf("Enter number of terms to show the Fibonacci series : ");
    scanf("%d", &n);

    printf("Fibonacci series :\n%d\n%d",a,b);
    for (int i = 0; i < n-2; i++)
    {
        c = a + b;
        printf("\n%d",c);
        a = b;
        b = c;
    }
}
// ================================================
/* Code by Abel Roy */
