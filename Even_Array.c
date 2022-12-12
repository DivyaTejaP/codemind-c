#include<stdio.h>
int main()
{
    int i,n,b,d,s=0,m=0,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        k++;
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            s++;
        }
        else if(a[i]%2!=0)
        {
            m++;
        }
    }
        if(s==k)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}