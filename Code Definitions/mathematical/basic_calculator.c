// BASIC CALCULATOR
// ----------------------------------------------------------------
#include<stdio.h>

void main()
{
    int a, b;
    printf("First number :");
    scanf("%d",&a);
    printf("Second number :");
    scanf("%d",&b);
    int add = a + b, sub = a - b, mul = a * b, div = a / b;
    printf("\nAddition : %d + %d = %d",a,b,add);
    printf("\nSubtraction : %d - %d = %d",a,b,sub);
    printf("\nDivision : %d / %d = %d",a,b,div);
    printf("\nMultiplication : %d x %d = %d",a,b,mul);
}
// ----------------------------------------------------------------
// Code by Abel Roy //
