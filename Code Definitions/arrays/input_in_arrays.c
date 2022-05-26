/* Taking INPUT in Arrays */
// =================================================
#include<stdio.h>
void main()
{
    // Taking size
    int len;
    printf("Enter size of array : ");
    scanf("%d", &len);

    // Taking array from the user
    int arr[len];
    printf("Enter elements of array : ");
    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    // Printing the array at last
    printf("Array : ");
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
}

// ================================================
/* Code by Abel Roy */
