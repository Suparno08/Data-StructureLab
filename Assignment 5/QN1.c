#include<stdio.h>
int fact(int );
int fact(int n){
    if (n==0)
    {
        return 1;
    }
    return n* fact(n-1);
    
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("%d ",fact(num));
    fact(num);
    return 0;
}