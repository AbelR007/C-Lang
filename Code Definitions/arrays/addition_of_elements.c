/* Sum of elements of an array */
// =================================================
#include<stdio.h>
void main()
{
    int arr[7] = {1,2,3,4,5,6,7}, sum = 0;
    int len = 7; // length of array

    // Loop Summation
    for (int i = 0; i < len; i++)
        sum += arr[i]; // adds arr[i] value to sum for every iteration of the loop

    /**
    In the loop,
        sum += arr[i]

    can also be written as...
        sum = sum + arr[i]
    */
    printf("Sum of elements of an array is %d\n", sum);
}
// ================================================
/* Code by Abel Roy */
