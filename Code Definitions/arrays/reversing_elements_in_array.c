// Reversing the elements in an array
// =================================================================
#include<stdio.h>
void printarr(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int arr[7] = {56,23,90,40,12,55,60}, len = 7;
    int temp;
    printarr(arr,len);
    for (int p = 0; p < (len/2)+1; p++)
    {
        temp = arr[p];
        arr[p] = arr[7-1-p];
        arr[7-1-p] = temp;
    }
    printarr(arr,len);
}
// =================================================================
// Code by Abel Roy //
