// Create 2-D array of 5×2. Display the result.
/*
Coded by: $up@rn0
 */
#include <stdio.h>
int main()
{
    int arr[5][2];
    printf("Enter array element below:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The 5 X 2 array is:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
           printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}