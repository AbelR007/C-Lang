// Searching a number in a 2 Dimensional Array
// ===============================================================
#include<stdio.h>

// Main Function
void main()
{
	// Ways to initlize a 2D Array
	// int arr[3][4] = {1,2,3,4, 5,6,7,8, 9,10,11,12};
	int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	int rows = 3, cols = 4;
	int num = 10, flag = 0;
	int r,c;

	// Loop to search a number in a 2D array
	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
		{
			if (arr[r][c] == num)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}

	// Checking if the number is present in the array or not
	if (flag==1)
		printf("%d is present at position %d %d",num,r,c);
	else
		printf("%d is NOT present",num);
}
// ================================================================
// Code by Abel Roy //
