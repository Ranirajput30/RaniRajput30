#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,si,ci,a;
    scanf("%f%f%f",&p,&r,&t);
    si=(p*r*t)/100;
    a=p*pow((1+r/100),t);
    ci=a-p;
    printf("SI=%.2f\nCI=%.2f",si,ci);
    return 0;
}