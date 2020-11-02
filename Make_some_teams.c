#include<stdio.h>
int diff(int,int);
int main()
{
    int temp,i,j,n,count = 0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //sort array:
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    for(i=0;i<n;i=i+2)
    {
        j = i+1;
        if(arr[i] == arr[j])
        {
            continue;
        }
        else
        {
            count = count + diff(arr[i],arr[j]);
        }
    }
    printf("%d",count);
return 0;
}
int diff(int n,int m)
{
    if(n>m)
        return (n-m);
    else
        return (m-n);
}
