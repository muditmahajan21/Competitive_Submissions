#include<stdio.h>
int main()
{
    int i,j,n,sum=0,c=0,d,m,x;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&d,&m);
    for(i=0;i<=n-m;i++)
    {   j=i;
        for(x=1;x<=m;x++)
        {   
            sum=sum+arr[j];
            j++;
        }
        if(sum==d)
        c++;
        sum=0;
    }
    printf("%d",c);
    return 0;
}
