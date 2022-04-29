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

    // Another way of calculating the length
    // l = strlen(str);

    // Printing the length
    printf("\nLength of %s : %d",str,l);
}
// =================================================================
// Code by Abel Roy //
