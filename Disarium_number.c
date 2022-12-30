#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,i,s=0;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        c=i%10;
        b=log10(i)+1;
        d=pow(c,b);
        s=s+d;
    }
    if(s==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}