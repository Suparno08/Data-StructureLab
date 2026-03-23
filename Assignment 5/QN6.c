#include <stdio.h>

int MaxElement(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    int max = MaxElement(arr, n - 1);

    if (arr[n - 1] > max)
    {
        return arr[n - 1];
    }
    else
    {
        return max;
    }
}

int main()
{
    int n;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maximum = MaxElement(arr, n);

    printf("Maximum element = %d\n", maximum);

    return 0;
}