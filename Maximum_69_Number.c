#include<stdio.h>
int main()
{
    int a[100],b,c=0,n,d,e,i;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        b=i%10;
        a[c]=b;
        c++;
    }
    for(i=c-1;i>=0;i--)
    {
        if(a[i]==6)
        {
            a[i]=9;
            break;
        }
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}