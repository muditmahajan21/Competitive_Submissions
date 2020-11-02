#include<stdio.h>
void angry();
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        angry();
    }
return 0;
}
void angry()
{
    int i,n,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=0)
        count++;
    }
    if(count>=k)
    printf("NO\n");
    else 
    printf("YES\n");
}
