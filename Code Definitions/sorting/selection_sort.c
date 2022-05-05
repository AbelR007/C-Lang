/* Selection Sort */
// =================================================
/**
        Explanation:

    Finds the minimum number in the list of elements by compares the first minimum with the rest of the elements in the list. The minimum is then sorted out at the first position, the rest of the unsorted list is searched for a minimum, and this keeps on repeating untill all elements are sorted out.

        Definition:

    This sorting algorithm, iterates through the array and finds the smallest number in the array and swaps it with the first element if it is smaller than the first element.
*/
#include<stdio.h>
void main()
{
    int n,arr[100],i,j;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("\nEnter the elements of the array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int y;
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(arr[i]<arr[j])
            {
                y=arr[i];
                arr[i]=arr[j];
                arr[j]=y;
            }
        }
    }

    printf("Sorted Array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}
// ================================================
/* Code by Abel Roy */
