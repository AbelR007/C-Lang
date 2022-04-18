// Changing values of variables using Pointers
// =================================================================
#include<stdio.h>
int changea(int a)
{
    a = a *2;
    return(a);
}
void main()
{
    int a = 56, *ptr, b = 23;
    printf("The value of a b is %d %u\n",a,&a);
    a = changea(a);
    printf("The value of a b is %d %u\n",a,&a);
}
// =================================================================
// Code by ABEL ROY //
