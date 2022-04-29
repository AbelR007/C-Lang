/* Adding Strings */
// =================================================
#include<stdio.h>
void main()
{
    char a[10] = "Pallotti";
    char b[10] = "College";
    char c[200];
    int p,i;

    // Loops to add 2 strings
    for (p=0; a[p]!='\0'; p++)
        c[p] = a[p];
    for (i=0; b[i]!='\0'; i++)
        c[i+p] = b[i];
    c[p+i] = '\0';

    // Alternate way of concatenating a string
    // strcat(c,a);
    // strcat(c,b);

    // Printing the finals string
    printf("New string is : %s",c);
}
// ================================================
/* Code by Abel Roy */
