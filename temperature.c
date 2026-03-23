#include<stdio.h>

int main()
{
    float c,f;

    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);

    f = (9*c/5)+32;

    printf("Fahrenheit = %.2f",f);

    return 0;
}