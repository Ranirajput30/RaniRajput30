#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,r1,r2;

    printf("Enter a b c: ");
    scanf("%f %f %f",&a,&b,&c);

    d=b*b-4*a*c;

    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are %.2f and %.2f",r1,r2);
    }
    else if(d==0)
    {
        r1=-b/(2*a);
        printf("Roots are equal = %.2f",r1);
    }
    else
        printf("Imaginary roots");

    return 0;
}