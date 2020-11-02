#include<stdio.h>
int main()
{
    int test,q;
    scanf("%d",&test);
    for(q = 0;q < test;q++)
    {
        int j,i,n,counter = 0,rsum = 0,lsum = 0,sum = 0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum += arr[i];
        }
        rsum = sum;
        for(i=0;i<n;i++)
        {
            rsum -= arr[i];
            if(rsum == lsum)
            {
                printf("YES\n");
                counter++;
                break;
            }
            lsum += arr[i];
        }
        if(counter == 0)
        {
            printf("NO\n");
        }
    }
return 0;
}
