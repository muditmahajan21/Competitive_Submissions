#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int h[n];
    for(i=0;i<n;i++)
    {
        h[i]=1;
    }
    for(i=0;i<n;i++)
    {   
        for(j=0;j<arr[i];j++)
        {
            if(j%2!=0)
            {
                h[i]=h[i]+1;
            }
            else if(j%2==0)
            {
                h[i]=h[i]*2;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",h[i]);
    }
return 0;
}
