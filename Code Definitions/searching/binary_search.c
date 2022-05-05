/* Binary Search in C */
// =================================================
#include<stdio.h>
void main()
{
    int arr[7]={2,4,6,8,10,12,14};
    int len = 7;
    int num = 8;
    int low = arr[0], high = arr[len-1], mid=(low+high)/2;

    int i, found=0;

    while (low <= high)
    {
        mid = (low+high/2);
        if (num == arr[mid])
        {
            found = 1;
            break;
        }
        else
            if (num > arr[mid])
                high = mid + 1;
            else
                low = mid - 1;
        // printf("\n- %d",mid);
    }

    if (found == 1)
        printf("\nNum %d found at position %d",arr[mid+1],mid+1);
    else
        printf("Number not found");
}
// ================================================
/* Code by Abel Roy */
