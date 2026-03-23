#include<stdio.h>

int main()
{
    int age[5], i;

    printf("Enter ages of 5 persons:\n");

    for(i=0;i<5;i++)
        scanf("%d",&age[i]);

    for(i=0;i<5;i++)
    {
        if(age[i]<=12)
            printf("Child\n");
        else if(age[i]<=17)
            printf("Teen\n");
        else if(age[i]<=60)
            printf("Adult\n");
        else
            printf("Senior Citizen\n");
    }

    return 0;
}