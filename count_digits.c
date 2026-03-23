#include<stdio.h>

int main()
{
    int n,count=0;

    printf("Enter number: ");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }

    printf("Total digits = %d",count);

    return 0;
}