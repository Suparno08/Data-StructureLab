#include<stdio.h>
int sum(int );
int sum(int n){
    if (n==0)
    {
        return 0;
    }
    return n+ sum(n-1);
    
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("%d ",sum(num));
    sum(num);
    return 0;
}