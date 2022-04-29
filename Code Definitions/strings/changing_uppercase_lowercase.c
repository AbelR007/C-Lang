/* Swapping lowercase characters to upper case and vice versa */
// =================================================
#include<stdio.h>
void main()
{
    // Initialize the variables
    char str[10] = "PallOtti";
    int i;

    // Printing string
    printf("\nString before swapping : %s",str);

    // Loop for swapping
    for (i=0; str[i] != '\0'; i++)
        if (str[i] > 64 && str[i] <91)
            str[i] = str[i] + 32;
        else
            str[i] = str[i] - 32;

    // Printing string
    printf("\nString after swapping : %s",str);
}
// ================================================
/* Code by Abel Roy */
