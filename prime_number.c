#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&a);
    for(i=3;i<a;i++)
    {
        if(a%i==0)
        {
        printf("not a prime");
        break;
        }
        else
        {
            printf("prime");
            break;
        }
    }
}