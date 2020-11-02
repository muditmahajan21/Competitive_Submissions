#include <stdio.h>
int main() 
{
    int n,i,j;
    
    scanf("%d", &n);
    
    int arr[n],max1=0,max;

    int count[100];
    for(i=0;i<100;i++)
    {
        count[i] = 0;
    }    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]]++; 
    }
    
    for(j=1;j<=100;j++)
    {
        if(count[j]>max1)
        {
            max=j;
            max1=count[j];
        }
    }

    int res=0;
    for(i=0; i<n; i++)
    {
        if(arr[i] != max)
           res++;
    }
    
    printf("%d",res);
    
    return 0;
}
