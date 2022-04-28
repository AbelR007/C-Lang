// Length of a String
// ----------------------------------------------------------------
#include<stdio.h>
void main()
{
    // Initialize variables
    char str[100];
    int l;

    // Take input string
    printf("Enter your string : ");
    scanf("%s",str);

    // Loop to get the length
    for (l = 0; str[l] != '\0'; ++l);

    // Printing the length
    printf("\nLength : %d",l);
}
// =================================================================
// Code by Abel Roy //
