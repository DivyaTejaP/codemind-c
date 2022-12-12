#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a==i*i)
        {
            printf("True");
            s=1;
            break;
        }
        else
        s=0;
    }
    if(s==0)
    {
        printf("False");
    }
}