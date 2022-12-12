#include<stdio.h>
int main()
{
    int a[10],p=1,i;
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
        p=p*a[i];
    }
    printf("%dKB",p);
}