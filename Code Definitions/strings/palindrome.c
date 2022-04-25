// PALINDROME
// ----------------------------------------------------------------
#include<stdio.h>

void main()
{
    // Initialize the variables
    char arr[7] = "racecar";
    // char arr[7] = "hellohi";
    int palindrome = 1;
    // int len = sizeof(arr);

    // Shorter Loop for the palindrome
    // for (int p = 0; arr[p] != arr[6-p]; p++)
    //     palindrome = 0;

    // Alternate/Simpler Loop for the palindrome
    for (int p = 0; p < 7; p++)
        if (arr[p] != arr[6-p])
            palindrome = 0;

    // Efficient Loop for the palindrome [Still working on progress]
    // int p;
    // for (int p = 0; p <= 3; p++)
    // {
    //     if (arr[p] != arr[6-p])
    //         palindrome = 0;
    // }

    // Prints if it is a palindrome or not
    if (palindrome == 1)
        printf("'%s' is a palindrome!",arr);
    if (palindrome == 0)
        printf("'%s' is NOT a palindrome",arr);
}
// ----------------------------------------------------------------
// Code by Abel Roy //
