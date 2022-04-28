// Linear Search in C
// =================================================
#include<stdio.h>
void main()
{
    // Initialize variables
    int arr[5] = {10,20,30,40,50}; // Example array
    int num, found=0, pos;

    // Taking input
    printf("Enter number to be searched : ");
    scanf("%d", &num);

    // Loop for Linear Search
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==num)
        {
            found = 1, pos = i;
            break;
        }
    }
    if (found == 1)
        printf("Num %d found at position %d",arr[pos],pos+1);
    else
        printf("Number not found in the array.");
}
// ================================================
/* Code by Abel Roy */
