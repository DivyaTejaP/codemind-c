#include<stdio.h>
int main()
{
    int a,i,b,c=0,d=1,e;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        c=c+b;
        d=d*b;
        e=d-c;
    }
    printf("%d",e);
}