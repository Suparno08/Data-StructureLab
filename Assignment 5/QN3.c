#include <stdio.h>
int printNumber(int);
int printNumber(int n)
{
    if (n == 0)
    {
        return 0;
    }
    printf("%d ", n);
    printNumber(n - 1);
    
    
}
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
     printNumber(num);

    return 0;
}