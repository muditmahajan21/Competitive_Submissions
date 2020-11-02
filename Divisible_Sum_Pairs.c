#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j,c=0,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            
            if(sum%k==0)
            
            {
               c++;
            }
        }
        sum=0;
    }
    printf("%d",c);
    return 0;
}
