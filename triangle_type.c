#include<stdio.h>

int main()
{
    int s[3];

    printf("Enter three sides:\n");
    scanf("%d%d%d",&s[0],&s[1],&s[2]);

    if(s[0]+s[1]>s[2] && s[0]+s[2]>s[1] && s[1]+s[2]>s[0])
    {
        if(s[0]==s[1] && s[1]==s[2])
            printf("Equilateral Triangle");
        else if(s[0]==s[1] || s[1]==s[2] || s[0]==s[2])
            printf("Isosceles Triangle");
        else
            printf("Scalene Triangle");
    }
    else
        printf("Not a valid triangle");

    return 0;
}