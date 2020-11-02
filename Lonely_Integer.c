#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count[101];
    for(i=0;i<101;i++)
    {
        count[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    
    for(i=0;i<101;i++)
    {
        if(count[i] == 1)
        {
            printf("%d",i);
        }
    }
return 0;
}
