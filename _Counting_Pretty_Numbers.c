#include<stdio.h>
int main()
{
 int i,n,l,r,j;
 scanf("%d",&n);
 for(j=1;j<=n;j++)
 {
   scanf("%d%d",&l,&r);
   int count=0;
 for(i=l;i<=r;i++)
 {
     if(i%10==2 || i%10==3 || i%10==9)
 {
         count++;
 }
 }printf("%d
",count);
}
}