#include<stdio.h>
int abs(int);
int main()
{
    int n,i,j,arr[100000],m=0,diff[10],min=0,counter=0;;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                diff[m]=abs(i-j);
                m=m+1;
            }
        }
        
    }
  
  min=diff[0];
    for(i=0;i<m;i++)
    {
        if(diff[i]<=min)
        {
            min=diff[i];
            counter=1;
        }
        
    }
    if(counter==0){
        printf("-1");
    }
    else{
    printf("%d",min);
    } 
return 0;
}
int abs(int n)
{
    if(n < 0)
    {
        return (n*(-1));
    }
    else 
    return n;
}
