/*Write a program to input two m × n matrices and then calculate the
sum of their corresponding elements and store it in a third m × n
matrix.
/*
Coded by: $up@rn0
*/
#include<stdio.h>
int main(){
    int m1,n1,m2,n2;
    printf("Enter no of rows and coloumn in first array:\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter no of rows and coloumn in second array:\n");
    scanf("%d%d",&m2,&n2);
    int arr1[m1][n1],arr2[m2][n2],sum[m1][n1];
    if (m1!=m2 || n1!=n2)
    {
        printf("The sum of matrices is not possible");
        return 0;
    }
    else
    {
        printf("It is possible to sum,\n Now give the data of the 1st matrix:\n");
    }
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("The 1st matrix is:\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("Now give the data of 2nd matrix:\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    printf("The 2nd matrix is:\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum matrix is:\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
   
    

    
    
    
    
    return 0;
}
