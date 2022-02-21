// Nested If examples [Easy & Direct]
// ----------------------------------------------------------------
#include <stdio.h>
void main()
{
    // Initialize variables
    int num;
    // Take input
    printf("Enter 1 or 2 : ");
    scanf("%d", &num);
    // Nested If-Else
    if (num == 1 || num == 2)
        if (num == 1)
            printf("You are lucky today!");
        else
            printf("Unfortunately, you aren't lucky today!");
    else
        printf("Invalid number!");
}
// ----------------------------------------------------------------
// Code by Abel Roy //
