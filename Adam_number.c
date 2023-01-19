#include<stdio.h>
int main()
{
    int a,b,c,i,s=0,d,j,x,y=0;
    scanf("%d",&a);
    b=a*a;
    for(i=a;i>0;i=i/10)
    {
        c=i%10;
        s=s*10+c;
    }
    //printf("%d",s);
    d=s*s;
    for(j=d;j>0;j=j/10)
    {
        x=j%10;
        y=y*10+x;
    }
    if(y==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}