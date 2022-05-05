/* Appending Elements */
// =================================================
#include<stdio.h>
void printarr(int arr[],int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ",arr[i]);
}
void main()
{
    int arr[100], len;

    printf("Enter size of array: ");
    scanf("%d", &len);

    printf("Enter elements in array: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nArray:\n");
    printarr(arr,len);
}
// ================================================
/* Code by Abel Roy */
