#include<stdio.h>
int main()
{
    int d=5,i,sum = 0,n,a;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        a = d/2;   
        sum+=a;
        d = a*3;
    }
    printf("%d",sum);
return 0;
}
