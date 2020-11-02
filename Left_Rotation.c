#include<stdio.h>
void rotate(int[],int);
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<m;i++)
    {   
        rotate(arr,n);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;
}
void rotate(int arr[],int n)
{
    int i,temp;
    temp = arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
