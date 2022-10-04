/* Copying string to another string */
// =================================================
# include <stdio.h>
# include <string.h>
void main()
{
    char string1[10] = "Abel Roy" ;
    char string2[100];

    strcpy(string2, string1);
    printf("%s %s", string1, string2);
}
// ================================================
/* Code by Abel Roy */
