#include<stdio.h>
int main()
{
    int n,k,i,e = 100;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c = 0; 
    do
    {
        if(arr[c]==1)
        {
            e=e-2;
        }
        e=e-1;
        c=(c+k)%n;
    }while(c!=0);

    printf("%d",e);
return 0;
}
