#include<stdio.h>
int main()
{
    int a,i,j,b,d;
    scanf("%d",&a);
    for(j=1;j<=a;j++)
    {
        for(i=a;i>=1;i--)
        {
            printf("%d ",i);
        }
        printf("
");
    }
}