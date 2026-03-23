#include<stdio.h>

int main()
{
    int n,i;
    long fact=1;

    printf("Enter number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        fact=fact*i;

    printf("Factorial = %ld",fact);

    return 0;
}