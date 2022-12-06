#include<stdio.h>
int main()
{
    int a,i,b,s=0;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        s=s*10+b;
    }
    if(a==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}