#include<stdio.h>

int main()
{
    int n,i,a[100];

    printf("Enter N: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        a[i]=i+1;

    printf("Natural Numbers:\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}