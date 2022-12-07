#include<stdio.h>
int main()
{
    int a,b,i,g=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(i>g)
            {
                g=i;
            }
        }
    }
    printf("%d",g);
}
