#include<stdio.h>
int add(int a)
{
    int i,s=0,b;
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
    s=s+b;
    }
    if(s<10)
    return s;
    else
    {
        add(s);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int h=add(a);
    printf("%d",h);
}