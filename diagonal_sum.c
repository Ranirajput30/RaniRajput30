#include <stdio.h>

int main()
{
    int a[10][10], i, j, n, sum=0;

    printf("Enter order of matrix: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
        sum += a[i][i];

    printf("Sum of diagonal elements = %d",sum);

    return 0;
}