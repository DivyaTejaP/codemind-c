#include<stdio.h>
int main()
{
    int k=0,j=0,i,n,b;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
        k++;
        if(i%2==0)
        j++;
        }
    }
    if(k==j)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}
