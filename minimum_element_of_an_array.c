#include<stdio.h>
int main()
{
    int n,i,b,min=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        min=a[0];
        scanf("%d",&a[i]);
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d",min);
}