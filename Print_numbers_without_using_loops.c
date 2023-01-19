#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&a);
    if(a>=1 && a<=10000)
    {
        for(i=1;i<=a;i++)
        {
            printf("%d ",i);
        }
    }
    else
    printf("The Number Series is Not Possible Print");
}