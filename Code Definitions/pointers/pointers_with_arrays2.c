// Substituting values into array from variables using Pointers
// =================================================================
#include<stdio.h>
#include<conio.h>
void printarr(int *arr[],int len)
{
    int i;
    printf("\n{");
    for (i = 0; i < len; i++)
        printf("%d,",*arr[i]);
    printf("}\n");
}
void main()
{
    int a = 10,b=20,c=30,d=40,e=50;
    int *arr[5], len = 5;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    arr[4] = &e;

    printarr(&arr,len);
    for (int i = 0; i < 5; i++)
    {
        printf("Enter :");
        scanf("%d",&*arr[i]);
    }
    printarr(&arr,len);
    getchar();
}
// =================================================================
// Code by Abel Roy //
