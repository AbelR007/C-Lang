/* Swapping numbers using Temporary variables */
// =================================================
#include<stdio.h>
void main()
{
    int a = 5, b = 3;

    printf("Before swapping, a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Before swapping, a = %d, b = %d\n", a, b);
}
// ================================================
/* Code by Abel Roy */
