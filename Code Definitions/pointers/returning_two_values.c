// Returning 2 Values [Using Pointers]
// =================================================================
#include<stdio.h>
#include<conio.h>

void area_perimeter(int len, int bre, int *areaptr, int *perptr)
{
    *areaptr = len * bre;
    *perptr = 2 * (len + bre);
}

void main()
{
    int len = 10, bre = 5, area, perimeter;
    area_perimeter(len, bre, &area, &perimeter);
    printf("Area: %d\nPerimeter: %d", area, perimeter);
}
// =================================================================
// Code by Abel Roy //
