#include <stdio.h>

int arraySum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return arr[n-1] + arraySum(arr, n-1);
}

int main()
{
    int n;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = arraySum(arr, n);

    printf("Sum of elements = %d\n", sum);

    return 0;
}