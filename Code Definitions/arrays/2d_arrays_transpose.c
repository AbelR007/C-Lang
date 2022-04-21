// 2 Dimensional Arrays
// ---------------------------------------
// Arrays with an x and y position
// ===============================================================
#include<stdio.h>

// Function to print a 2D Array
void printarr(int arr[][],int rows, int cols)
{
	for (int r = 0; r < rows; r++)
	{
		printf("%d : ",r);
		for (int c = 0; c < cols; c++)
		{
			printf("%3d", arr[r][c]);
		}
		printf("\n");
	}
}

void main()
{
	int arr[3][4] = {1,2,3,4, 5,6,7,8, 9,10,11,12};
	int rows = 3, cols = 4;
	printarr(arr[3][4],3,4);
}
// ================================================================
// Code by Abel Roy //