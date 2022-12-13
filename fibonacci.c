#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    b=0,c=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d ",b);
        j=b+c;
        b=c;
        c=j;
    }
}