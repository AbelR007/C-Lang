/* Check whether a character is vowel or not */
// =================================================
#include<stdio.h>
void main()
{
    char ch;

    printf("Enter character : ");
    scanf("%c",&ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a Vowel!",ch);
    else
        printf("%c is a Consonant!",ch);
}

// ================================================
/* Code by Abel Roy */
