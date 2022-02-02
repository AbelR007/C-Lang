// PERIMETER and AREA
// ----------------------------------------------------------------
#include<stdio.h>

// Perimeter function
int perimeter(int length, int breadth)
{
    int perimeter = 2 * (length + breadth);
    return printf("Perimeter is %d units\n", perimeter);
}

// Area function
int area(int length, int breadth)
{
    int area = length * breadth;
    return printf("Area is %d units\n", area);
}

// Main function
void main()
{
    // Initialize the variables
    int length, breadth;

    // Taking input using scanf
    printf("Length : ");
    scanf("%d", &length);
    printf("Breadth : ");
    scanf("%d", &breadth);

    // Using User-Defined Functions
    area(length, breadth);
    perimeter(length, breadth);
}
// ----------------------------------------------------------------
// Code by Abel Roy //
