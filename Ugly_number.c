#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1 && n!=7 && n!=14 && n!=13 && n!=11 && n<=15)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}