// Replacing elements in an array
// =================================================================
#include<stdio.h>
void printarr(int arr[])
{
    printf("Array : {");
    for (int i = 0; i < 6; i++)
        printf("%d, ", arr[i]);
    printf("}\n");
}
void main()
{
    int temp = 0;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int len = 6;
    // printf("%d",arr[0]);
    printf("Array before replacing : \n");
    printarr(arr);
    for (int pos = 0; pos < len-1; pos++)
    {
        if (arr[pos] < arr[pos + 1])
        {
            temp = arr[pos];
            arr[pos] = arr[pos + 1];
            arr[pos + 1] = temp;
        }
    }
    printf("\n");
    printf("Array after replacing : \n");
    printarr(arr);
}
// =================================================================
// Code by Abel Roy //
