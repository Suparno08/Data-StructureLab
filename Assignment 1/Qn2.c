// Create 2-D array of 3×3.Apply the square form matrix to display the elements

/*
Coded by: $up@rn0
 */
#include <stdio.h>
int main()
{
    int arr[3][3];
    printf("Enter array element below:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The 3 X 3 array in square form is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}