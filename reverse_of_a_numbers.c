#include<stdio.h>
int main()
{
    int a,i,c,b=0,j;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        c=i%10;
        b=b*10+c;
    }
    //if(a==c)
    {
        printf("%d",b);
    }
}