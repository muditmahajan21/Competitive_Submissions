#include<stdio.h>
void lane(int[],int);
int mini(int[],int);
int main()
{
    int i,t,n;
    scanf("%d %d",&n,&t);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        lane(arr,n);
    }
return 0;
}
void lane(int arr[],int n)
{
    int k,i,j;
    scanf("%d %d",&i,&j);
    j = j+1;
    int len = j-i;
    int res[len];
    for(k=0;k<len;k++)
    {   
        res[k] = arr[i];
        i++;
    }
    int min = mini(res,len);
    printf("%d\n",min);
}
int mini(int res[],int len)
{
    int min = res[0];
    int i;
    for(i=0;i<len;i++)
    {
        if(res[i] < min)
            min = res[i];
    }
    return min;
}
