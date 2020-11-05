#include<stdio.h>
int main()
{
    int j=0,i,n,k,ans,max=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {   
        if(arr[i]>max)
        max=arr[i];
        
    }
    ans=max-k;
    if(ans>0)
    printf("%d",ans);
    else 
    printf("0");
return 0;
}
