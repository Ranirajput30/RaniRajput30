#include<stdio.h>

int main()
{
    int x,y,i,result=1;

    printf("Enter base and power: ");
    scanf("%d %d",&x,&y);

    for(i=1;i<=y;i++)
        result=result*x;

    printf("Result = %d",result);

    return 0;
}