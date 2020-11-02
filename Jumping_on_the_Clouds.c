#include<stdio.h>
int main()
{
    int i,j = 0,count = 0,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    while(j < n)
    {
        if(arr[j] == arr[j+1] && arr[j] == arr[j+2])
        {
            count++;
            j+=2;
        }
        if(arr[j] != arr[j+1])
        {
            count++;
            j+=2;
        }
        if(arr[j] == arr[j+1] && arr[j] != arr[j+2])
        {
            count++;
            j++;
        }
    }
    printf("%d",count-1);
return 0;
}
