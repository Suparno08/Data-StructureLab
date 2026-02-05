#include <stdio.h>
int BinarySearch(int n, int target, int arr[])
{
    int st = 0;
    int end = n - 1;
    
    while (st<=end)
    
    
    {
        int mid = st + (end - st) / 2;
        if (target >arr[mid] )
        {
            st = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            
            return mid;
        }
    }
    return -1;
}
int main()
{
    int N, X;
    printf("Enter size of array:\n");
    scanf("%d", &N);
    int arr[N];
    printf("=:= Note: Please give sorted array =:=\n");
    printf("Enter array elements below:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target:\n");
    scanf("%d",&X);
    int index=BinarySearch(N, X, arr);
    if (index<0)
    {
        printf("-1");
    }
    else
    {
        printf("the index is %d",index);
    }
    
    


    return 0;
}