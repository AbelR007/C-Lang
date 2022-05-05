/* Comparing two strings */
// =================================================
# include <stdio.h>
# include <string.h>
void main()
{
    char string1[5] = "Abel" ;
    char string2[5] = "Roy" ;
    int i, j, k ;

    i = strcmp(string1, "Abel");
    j = strcmp(string1, string2);
    k = strcmp(string1, "Abel Not");
    printf("%d %d %d\n", i, j, k);
}
// ================================================
/* Code by Abel Roy */
