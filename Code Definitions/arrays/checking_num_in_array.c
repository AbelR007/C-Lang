// Checking if a number is in the array
// ====================================================================
#include<stdio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int num, flag = 0, numpos = 0 ;
    printf("Enter number : ");
    scanf("%d",&num);
    for (int pos = 0; pos < 5; pos++)
    {
        if (arr[pos] == num)
        {
            flag = 1;
            numpos = pos;
        }
    }
    if (flag == 1)
        printf("%d is present in array at position arr[%d]", num, numpos);
    else
        printf("%d is NOT present in array", num);
    getch();
}
// =================================================================
// Code by Abel Roy //
