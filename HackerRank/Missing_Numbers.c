#include<stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d",&n);
    int arr1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    scanf("%d",&m);
    int arr2[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr[10001];
    for(i=0;i<10001;i++)
    {
        arr[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        arr[arr1[i]-1]++;
    }
    for(i=0;i<m;i++)
    {
        arr[arr2[i]-1]--;
    }
    for(i=0;i<10001;i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }
        else  
            printf("%d ",i+1);
    }
return 0;
}
