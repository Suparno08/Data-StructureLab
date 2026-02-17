/* 
Write a function that returns 1 if a number is even, otherwise
returns 0.
Input Format:
An integer N.
Output Format:
Print "Even" or "Odd".
Constraints:
1 ≤ N ≤ 10⁹
*/
/*
Coded by: $up@rn0
*/
#include<stdio.h>
int EvenOdd(int);
int EvenOdd(int n){
    if (n %2==0)
    {
        return 1;
    }
    return 0;
    
}
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    
    int number = EvenOdd(num);
    printf("%d",number);
    return 0;
}