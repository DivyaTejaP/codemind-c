#include<stdio.h>
int main()
{
    int a[50],i,n,b,c,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2!=0)
        sum=sum+a[i];
    }
    printf("%d",sum);
}
