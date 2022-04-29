// PALINDROME
// ----------------------------------------------------------------
#include<stdio.h>

void main()
{
    // Initialize the variables
    char str[7] = "racecar";
    // char str[7] = "hellohi";
    int palindrome = 1;
    int p;
    int len;
    for (len = 0; str[len] != '\0'; ++len);
    // printf("%d",len);
    // int len = sizeof(str);

    // Shorter Loop for the palindrome
    // for (p = 0; str[p] != str[len-1-p]; p++);
    // printf("=>%d %d\n", p,len);
    //     palindrome = 0;

    // Alternate/Simpler Loop for the palindrome
    // for (int p = 0; p < 7; p++)
    //     if (str[p] != str[6-p])
    //         palindrome = 0;

    // Efficient Loop for the palindrome [Still working on progress]
    // int p;
    // for (int p = 0; p <= len/2; p++)
    // {
    //     if (str[p] != str[6-p])
    //         palindrome = 0;
    // }

    // Prints if it is a palindrome or not
    // if (p==len+1)
    //     printf("YES");
    // else
    //     printf("NO");
    if (palindrome == 1)
        printf("'%s' is a palindrome!",str);
    if (palindrome == 0)
        printf("'%s' is NOT a palindrome",str);
}
// ----------------------------------------------------------------
// Code by Abel Roy //
