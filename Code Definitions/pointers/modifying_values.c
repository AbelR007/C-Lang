// Changing values of variables using Pointers
// =================================================================
#include<stdio.h>
int modify_to_current_val(int *a)
{
    *a = *a * 2;
    // return(*a);
}
int changing_completely(int *a, int *b)
{
    *a = *b;
}

void new()
{
    int a = 56, b = 23;

    printf("The value of a is %d\n",a);
    modify_to_current_val(&a);

    printf("The value of a is %d\n",a);
    changing_completely(&a, &b);

    printf("The value of a is %d\n",a);
}
void main(){
    int a = 10, b = 22;
    // printf("%d",*a);
    int *ptr = &a;

    *ptr = *ptr * 2;

    *ptr = b;
    printf("The value of a is %d\n",a);
}
// =================================================================
// Code by ABEL ROY //
