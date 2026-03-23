#include<stdio.h>
#include<math.h>

int main()
{
    int bin,dec=0,i=0,r;

    scanf("%d",&bin);

    while(bin>0)
    {
        r=bin%10;
        dec+=r*pow(2,i);
        bin/=10;
        i++;
    }

    printf("Decimal = %d",dec);

    return 0;
}