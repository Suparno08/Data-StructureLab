/*Create a 1-D array of 10 numbers. Write a program to print the
position of the smallest of n numbers using arrays
*/
/*
Coded by: $up@rn0
 */
#include<stdio.h>
int main(){
    int arr[10], index;
    printf("Enter array elements below\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            index = i;
        }
    }
    printf("The smallest array index is %d",index);
    
    return 0;
}