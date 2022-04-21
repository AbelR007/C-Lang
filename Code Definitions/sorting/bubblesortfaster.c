// Bubble Sorting V2 [Faster]
// ----------------------------------------------------------------
// Sorting numbers in an array from increasing to decreasing order
// =======================================================================
// Libraries
#include<stdio.h>

// Function to print array
void printarr(int arr[], int len)
{
    for (int s=0;s<len; s++)
        if (s == (len-1))
            printf("%d}",arr[s]);
        else
            printf("%d,",arr[s]);
}

// Main function
void main()
{
    // Initialize the variables
    int arr[5] = {20,40,50,10,30};
    int len = 5;
    int temp;

    // Prints the Array
    printf("Given array is :\n{");
    printarr(arr, len);

    // Program for Bubble Sorting the Array from increasing to decreasing order
    for (int p = 1; p <= len; p++)
    {
        for (int i = 1; i < len; i++)
        {
            if (arr[i] < arr[i-1])
            {
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        // len = len -;
        }
    }

    // Prints the Array
    printf("\n\nBubble Sorted Array :\n{");
    printarr(arr, len);
    // getchar();
}
// ============================================================================
// Code by Abel Roy | AbelR007 //
