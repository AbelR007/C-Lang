// Pointers with Arrays
// =================================================================
#include<stdio.h>
#include<conio.h>
// Print Array Function
void print_arr(char arr[], int len)
{
    int i;
    for (i = 0; i != '\0';i++)
        printf("%s", arr[i]);
}
// Main function
void main()
{
    char arr[5] = "asddf";
    int len = 5;
    print_arr(arr, len);
}
// =================================================================
// Code by Abel Roy //
