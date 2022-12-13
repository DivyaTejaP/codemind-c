#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=a%400;
    c=a%4;
    d=a%100;
    if(b==0)
    {
        printf("True");
    }
    else
    {
    if(d==0)
    {
        printf("False");
    }
    else if(c==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    }
}