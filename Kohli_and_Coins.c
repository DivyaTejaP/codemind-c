#include<stdio.h>
int main()
{
    int a,i,b,c,d,e;
    scanf("%d",&a);
    if(a%10==0)
    {
        b=a/10;
        printf("%d",b);
    }
    else if(a%5==0)
    {
        c=a/10;
        d=a%10;
        e=d/5;
        b=c+e;
        printf("%d",b);
    }
    else
    {
        printf("-1");
    }
}