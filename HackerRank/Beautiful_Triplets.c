#include<stdio.h>
int main()
{
    int n,d,i,j,k,count = 0;
    scanf("%d %d",&n,&d);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[j] - arr[i]) == d)
            {
              for(k=j+1;k<n;k++)
              {
                if((arr[k] - arr[j]) == d)
                {
                  count ++;
                }
              }
            }
        }
    }

    printf("%d",count);
return 0;
}
