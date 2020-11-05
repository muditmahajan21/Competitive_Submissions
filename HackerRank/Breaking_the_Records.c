#include<stdio.h>
int main()
{
    int i,n,max=0,min=100000000,c1=0,c2=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]>a && arr[i]>max)
        {
            max=arr[i];
            c1++;
        }
    }

    for(i=1;i<n;i++)
    {
        if(arr[i]<a && arr[i]<min)
        {
            min=arr[i];
            c2++;
        }
    }
    printf("%d %d",c1,c2);
return 0;
}
