#include<stdio.h>
int main()
{
    int a,b,c,d,e,i,j,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        s=0;
        for(j=b;j>0;j=j/10)
        {
            c=j%10;
            s=s*10+c;
        }
        if(s==b)
        {
            printf("True
");
        } 
        else
        { 
            printf("False
");
        }
    }
}