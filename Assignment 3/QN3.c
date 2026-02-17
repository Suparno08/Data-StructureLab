/*
Problem Statement:
Implement a recursive function to compute factorial of a number.
Input Format:
An integer N.
Output Format:
Print N!
Constraints:
0 ≤ N ≤ 20
*/
/*
Coded by: $up@rn0
*/
#include<stdio.h>
int fact(int );
int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("%d",fact(num));
    return 0;
}