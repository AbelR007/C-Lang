// Addition of 2 Arrays using defined values //
// =================================================================
#include<stdio.h>

// Function : Prints the array
void printarr(int arr[],int len)
{
    for(int i = 0; i < len; i++)
        printf("%d ",arr[i]);
}
// Main function
void main()
{
    // Initialize the 2 arrays and 3 array
    int arr1[3] = {1,2,3}, arr2[3] = {4,5,6};
    int arr3[6];

    // Loop to add the values of the 2 arrays to the 3 array
    for (int i=0; i<6; i++)
        if (i<3)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i-3];

    // Prints the array
    printarr(arr3,6);
}
// =================================================================
// Code by Abel Roy //
