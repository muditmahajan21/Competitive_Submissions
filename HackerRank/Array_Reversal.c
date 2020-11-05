#include<stdio.h>
int main()
{
    int arr[1000];
    int i,n,m=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[m]);
        m++;
    }
    for(a=n-1;a>=0;a--)
    {
        
        
        printf("%d ",arr[a]);
        
    }
    return 0;
}
