#include<stdio.h>
void sort(int [],int,int);
int main()
{
    unsigned long long int i,n,p;
    scanf("%llu",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,0,n-1);
    p=n/2;
    printf("%d",arr[p]);
return 0;
}
void sort(int arr[],int first,int last)
{
    int i,j,temp,pivot;

    if(first < last)
    {
        pivot = first;
        i = first;
        j = last;

        while(i<j)
        {
            while((arr[i] <= arr[pivot]) && i < last)
            {
                i++;
            }
            while(arr[j]>arr[pivot])
            {
                j--;
            }
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

        temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      sort(arr,first,j-1);
      sort(arr,j+1,last);
    }
}
