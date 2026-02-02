/* Write a program to read and display a 3 x 3 matrix
 and apply transpose to the matrix.*/
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
    printf("The 3 x 3 matrix entered by the user is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("After transpose,\n the 3 X 3 matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}