#include<stdio.h>
int main()
{
    int a=0,b=0,n,i,j,diff,c;
    scanf("%d",&n);

    int arr[n][n];

    for(i=0;i<n;i++)
    {   
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        a=a+arr[i][i];
    }
    c=n-1;
    for(i=0;i<n;i++)
    {
        
        {
            b=b+arr[i][c];
        c--;
        }
    }

    diff=a-b;
    if(diff<0)
        {
            diff=diff-2*diff;
        }
    else diff=diff;
    printf("%d",diff);

}
