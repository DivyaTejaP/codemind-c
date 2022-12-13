#include<stdio.h>
int main()
{
    int a,i,b,c,d,k;
    b=0,c=1;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        //printf("%d ",b);
        d=b+c;
        b=c;
        c=d;
        if(d==a)
        {
            k=1;
            break;
        }
    }
    if(k==1)
        {
            printf("True");
        }
    else
        {
            printf("False");
        }
}