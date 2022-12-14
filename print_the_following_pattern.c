#include<stdio.h>
int main()
{
    int n;
    char i,j;
    scanf("%d",&n);
    for(i=65+(n-1);i>64;i--)
    {
        for(j=i;j>=65;j--)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}