#include<stdio.h>
int main()
{
   int i,m,n,sum=0;
   scanf("%d",&m);
   for(i=1;i<=m;i++)
   {
       scanf("%d",&n);
       sum=sum+n;
   }
   printf("%d",sum);
   return 0;

}
