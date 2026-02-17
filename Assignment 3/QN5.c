/*
Problem Statement:
Given an array of N integers, write a function to return the
maximum element.
Input Format:
N
N space-separated integers
Output Format:
Print the maximum value.
Constraints:
1 ≤ N ≤ 10⁵
*/
/*
Coded by: $up@rn0
*/
#include <stdio.h>
#include<stdlib.h>
int LargestNumber(int arr[], int size)
{
    int max = arr[0];
    
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        
    }
    return max;
}

int main()
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);
    int *arr;
    
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d",LargestNumber(arr, n));
    

    return 0;
}