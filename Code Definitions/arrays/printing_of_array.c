// Printing of Array
// ----------------------------------------------------------------
// Prints the array on the output screen using for loops
// =========================================================
#include <stdio.h>

void printarr(int arr[],int len)
{
    for (int i=0;i<len; i++) // runs through the array printing every character
        if (i == (len-1)) // to check for the end of the array
            printf("%d}\n",arr[i]);
        else // else check
            printf("%d,",arr[i]);
}

// Main function
void main()
{
    // Initialize the variables
    int arr[5] = {20,40,50,10,30};
    int len = 5;

    // Prints the Array
    printf("Given array is : {");
    printarr(arr,len);
}
// =====================================
// Code by Abel Roy //
