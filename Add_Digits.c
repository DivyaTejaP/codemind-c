#include<stdio.h>
int ma(int a)
{
    int i,c,s=0;
    for(i=a;i>0;i=i/10)
    {
        c=i%10;s=s+c;
        
    }
    if(a<10)
    {
        return s;
        
    }
    else
    {
        ma(s);
        
    }
    
}
int main()
{
    int a;
    scanf("%d",&a);
    int h=ma(a);
    printf("%d",h);
    
}