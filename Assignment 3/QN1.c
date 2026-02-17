/*Problem Statement:
Given two integers A and B, write a C program using a function to return
their sum.
Input Format:
Two integers A and B.
Output Format:
Print the sum.
Constraints:
-10⁶ ≤ A, B ≤ 10⁶
*/
/*
Coded by: $up@rn0
*/
#include<stdio.h>
int sum(int,int);
int sum(int x,int y){
    return x+y;
}
int main(){
    int a ,  b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    
    printf("Sum is :%d",sum(a,b));
    

    return 0;
}