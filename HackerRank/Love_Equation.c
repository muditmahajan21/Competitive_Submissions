#include<stdio.h>
int main()
{
    int a,i,n,k;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    {   if(n%10!=0)
        {
        n=n-1;
        }
     else 
         n=n/10;
    }
    printf("%d",n);
return 0;
    }