#include <stdio.h>

int main()
{
    char str[100];
    int i=0,a=0,d=0,s=0;

    printf("Enter string: ");
    gets(str);

    while(str[i] != '\0')
    {
        if((str[i]>='A' && str[i]<='Z') ||
           (str[i]>='a' && str[i]<='z'))
            a++;

        else if(str[i]>='0' && str[i]<='9')
            d++;

        else
            s++;

        i++;
    }

    printf("Alphabets=%d\nDigits=%d\nSpecial=%d",a,d,s);

    return 0;
}