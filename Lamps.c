#include<stdio.h>
int main()
{
    int n,k,x,y,c;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(x<y)
    {
        c=n*x;
    }
    else if(x>y)
    {
        c=(k*x)+((n-k)*y);
    }
    else if(x==y)
    {
        c=n*x;
    }
    printf("%d",c);
}