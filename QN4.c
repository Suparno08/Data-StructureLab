#include <stdio.h>

int countDigits(int n)
{
    if (n < 10)
    {
        printf("%d ",n);
        return n;
    }
    printf("%d ",n);

    countDigits(n / 10);
    
}

int main()
{
    int num;

    printf("Enter an integer:\n");
    scanf("%d", &num);


    countDigits(num);

    return 0;
}