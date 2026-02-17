/*
Problem Statement:
Write a function that returns the reversed integer.
Input Format:
An integer N.
Output Format:
Print reversed number.
Constraints:
-10⁹ ≤ N ≤ 10⁹
*/
/*
Coded by: $up@rn0
*/
#include<stdio.h>
void ReverseNumber(int );
void ReverseNumber(int n){
    int rem= 0;

    while (n >0)
    {
        rem = n%10;
        n = n/10;
        printf("%d",rem);
    }
    
    
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    ReverseNumber(num);

    return 0;
}