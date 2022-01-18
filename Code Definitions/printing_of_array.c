// Printing of Array
// ----------------------------------------------------------------
// Prints the array on the output screen using for loops

#include <stdio.h>

// Main function
void main()
{
    // Initialize the variables
    int arr[5] = {20,40,50,10,30};
    int len = 5;

    // Prints the Array
    printf("Given array is : {");
    for (int s=0;s<len; s++) // runs through the array printing every character
    {
        if (s == (len-1)) // to check for the end of the array
        {
            printf("%d}",arr[s]);
        }
        else // else check
        {
            printf("%d,",arr[s]);
        }
    }
}

// Code by Abel Roy //
