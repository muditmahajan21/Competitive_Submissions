#include<stdio.h>
int main()
{
    int n,k,b,i;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&b);
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(i!=k)
        sum=sum+arr[i];
    }
    if(sum/2==b)
    printf("Bon Appetit");
    
    else 
    {
        printf("%d",b-sum/2);
    }
    return 0;
}
