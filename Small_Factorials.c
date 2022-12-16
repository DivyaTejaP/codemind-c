#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,n=1,j; 
        scanf("%d",&b);
        for(j=1;j<=b;j++)
        {
            n=n*j;
        }
        printf("%d
",n); 
    }
}