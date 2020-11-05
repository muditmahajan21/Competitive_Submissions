#include<stdio.h> 
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int res[n];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<38)
        res[i]=arr[i];
    
        else if(arr[i]%5==0)
        res[i]=arr[i];
    
        else if(arr[i]%5==4)
        res[i]=arr[i]+1;
    
        else if(arr[i]%5==3)
        res[i]=arr[i]+2;
    
        else if(arr[i]%5==2)
        res[i]=arr[i];
    
        else if(arr[i]%5==1)
        res[i]=arr[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",res[i]);
    }
return 0;
}
