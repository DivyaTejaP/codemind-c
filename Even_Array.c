#include<stdio.h>
int main()
{
    int a[100],n,i,b,d,r,c=0,j,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            c++;
        }
    }
    if(c==n){
        printf("True");
    }
    else{
        printf("False");
    }
}