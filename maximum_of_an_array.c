#include<stdio.h>
int main()
{
    int n,i,b,max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        max=a[i];
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}