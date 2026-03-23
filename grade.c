#include<stdio.h>

int main()
{
    float m1,m2,m3,m4,m5,per;

    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);

    per=(m1+m2+m3+m4+m5)/5;

    if(per>=90)
        printf("Grade A");
    else if(per>=80)
        printf("Grade B");
    else if(per>=60)
        printf("Grade C");
    else
        printf("Grade D");

    return 0;
}