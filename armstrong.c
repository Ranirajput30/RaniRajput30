#include<stdio.h>

int main()
{
    int i,n,r,sum;

    for(i=1;i<=100;i++)
    {
        n=i;
        sum=0;

        while(n>0)
        {
            r=n%10;
            sum+=r*r*r;
            n/=10;
        }

        if(sum==i)
            printf("%d ",i);
    }

    return 0;
}