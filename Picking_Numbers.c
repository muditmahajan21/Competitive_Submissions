#include<stdio.h>
int main()
{
    int i,j,max = 0,n,count1,count2 ;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {   
        count1 = 0;
        count2 = 0;
        for(j=0;j<n;j++)
        {
            if((arr[i] - arr[j]) >= 0 && (arr[i] - arr[j]) <= 1)
            {
                count1++;
            }
            else if ((arr[i] - arr[j] >= -1) && (arr[i] - arr[j] <=0))
            {
                count2++;
            }
        }
        if(count1 > max)
        {
            max = count1;
        }
        else if(count2 > max)
        {
            max = count2;
        }
    }
    printf("%d",max);
return 0;
}
