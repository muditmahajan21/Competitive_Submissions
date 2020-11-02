#include<stdio.h>
int main()
{
    int n,m,i,j,max = 0,temp = 0;
    scanf("%d %d",&n,&m);
    int arr[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    //arr[m] = n-1;
    if(n == m)
    {
        printf("0");
    }
    else 
    {
        if(m == 1)
        {   
            if(n-1-arr[0] > arr[0]-0)
            {
                printf("%d",n-1-arr[0]);
            }
            else 
            {
                printf("%d",arr[0]-0);
            }
        }
        else 
        {
            for(i=0;i<m;i++)
            {
                for(j=0;j<m;j++)
                {
                    if(arr[i] < arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            

            max = arr[1] - arr[0];
            for(i=0;i<m-1;i++)
            {
                if(max < arr[i+1] - arr[i])
                {
                    max = arr[i+1] - arr[i];
                }
            }
        
        
        if(max/2 > n-1-arr[m-1] && max/2 > arr[0] - 0)
        {
            printf("%d",max/2);
        }
        else if (max/2 < n-1-arr[m-1] && n-1-arr[m-1] > arr[0] - 0)
        {
            printf("%d",n-1-arr[m-1]);
        } 
        else if (max/2 < arr[0] - 0 && arr[0] - 0 > n-1-arr[m-1])
        {
            printf("%d",arr[0] - 0);
        }
        }
    }
return 0;
}
