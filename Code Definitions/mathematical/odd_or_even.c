// ODD or EVEN number
// ----------------------------------------------------------------
#include<stdio.h>
void tester(int num)
{
    if (num % 2 == 0)
        printf("It's an EVEN number!");
    else
        printf("It's a ODD number!");
}
void main()
{
    int val;
    printf("Enter a number : ");
    scanf("%d", &val);
    tester(val);
}
// ----------------------------------------------------------------
// Code by Abel Roy //
