/* Printing a String */
// =================================================
#include <stdio.h>
void main()
{
    // Initialize
    char str[15] = "AbelRoy";

    // Simplest way to print a String
    printf("%s", str);

    // Printing a string using loop
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);
}
// ================================================
/* Code by Abel Roy */
