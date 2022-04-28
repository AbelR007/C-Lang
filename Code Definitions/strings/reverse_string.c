// Reversing a string //
// =============================================================================
#include<stdio.h>

// Main function
void main()
{
    // Initialize the variables
    char str[5] = "hello";
    int len = 5;

    // Loop to reverse the string
    for (int i = len-1; i>=0; i--)
        printf("%c", str[i]);
}
// =================================================================
// Code By Abel Roy //
