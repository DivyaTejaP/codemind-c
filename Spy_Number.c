#include<stdio.h>
int main()
{
    int a,i,d,j=1,b,c=0;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        d=i%10;
        j=j*d;
        c=c+d;
    }
    if(j==c)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}