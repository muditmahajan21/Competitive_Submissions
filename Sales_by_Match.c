#include<stdio.h>
int main()
{
    int i,j,n,temp = 0,count = 0,k=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {   if(arr[i] > arr[j])
            { temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
        }
    }
                  /*  printf("*****");
                    for(i=0;i<n;i++)
                    {
                      printf("%d\n",arr[i]);
                    }
                    printf("*****");*/
    int a = 0,b = 0;
    while(k!=n)
    {
        b = a+1;
        if(arr[a] == arr[b])
        {
            a = a+2;
            k = k+2;
            count++;
        }
        else
        {
            a  = a+1;
            k = k+1;
        }
    }
    printf("%d\n",count);
return 0;
}
