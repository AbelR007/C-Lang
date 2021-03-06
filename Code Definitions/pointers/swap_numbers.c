// Swapping numbers using Pointers]
// ----------------------------------------------------------------
#include<stdio.h>

// Swap Numbers function
int swap_num(int *aptr, int *bptr)
{
    int flag = *bptr;
    *bptr = *aptr;
    *aptr = flag;
}

// Main function
void main()
{
    // Initialize the variables
    int a = 10, b = 20;
    printf("Before Swapping\n");
    printf("a -> %d\n",a);
    printf("b -> %d\n\n",b);
    swap_num(&a, &b);

    // Printing the numbers
    printf("After Swapping\n");
    printf("a -> %d\n",a);
    printf("b -> %d\n",b);
}
// =================================================================
// Code by Abel Roy //
