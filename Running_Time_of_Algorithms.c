#include<stdio.h>
void sort(int [],int);
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
return 0;
}
void sort(int arr[],int n)
{
    int i,j,count=0,temp,a;
    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0&&arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
            count++;
        }
        arr[j+1] = temp;
        
    }
    printf("%d",count);
}
