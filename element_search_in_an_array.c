#include<stdio.h>
int main()
{
    int a[100],b,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c,s=0;
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]==c)
        s++;
    }
    if(s!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}