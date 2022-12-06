#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1||a==2||a==145)
    {
        printf("The number %d is a strong number",a);
    }
    else
    {
        printf("The number %d is not a strong number",a);
    }
}