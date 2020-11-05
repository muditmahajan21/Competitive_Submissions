#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num[101];
    int count[101];
    for(i=0;i<100;i++)
    {
        count[i] =0;
    }
    for(i=0;i<=100;i++)
    {
        num[i] = i;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<101;j++)
        {
            if(arr[i] == num[j])
            {
                count[j]++;
            }
        }
    }
    for(i=0;i<100;i++)
    {
        printf("%d ",count[i]);
    }
return 0;
}
