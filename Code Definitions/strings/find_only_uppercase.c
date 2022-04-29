/* Finding only Uppercase characters */
// =================================================
#include<stdio.h>
void main()
{
    char str[10] = "PallOtti";
    int i;

    // Checking for Lower case
    // for (i = 0; str[i] != '\0'; i++)
    //     if (str[i] > 96 && str[i] < 123)
    //         printf("%c", str[i]);

    // Changing upper case to lower case
    for (i=0; str[i] != '\0'; i++)
        if (str[i] > 64 && str[i] <91)
            str[i] = str[i] + 32;

    printf("\nString in lowercase : %s",str);
}
// ================================================
/* Code by Abel Roy */
