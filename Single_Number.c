#include<stdio.h>
int main()
{
    int n,i,b,c=0,d,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
            c++;
            }
        }
        if(c==1)
        {
             printf("%d",a[i]);
             break;
        }
    }
    //printf("%d",c);
    
}
