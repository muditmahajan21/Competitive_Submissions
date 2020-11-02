#include <stdio.h>
int main() 
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n+1];
    for(i = 1; i <= n; i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i = 1; i <=n+1 ;i++)
        {
            for(j = 1; j <= n; j++)
            {
                if(arr[arr[j]] == i)
                    printf("%d\n",j);
            }
        }
return 0;

}
