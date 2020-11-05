#include<stdio.h>
int main()
{
    int s,t,a,b,m,n,i,j,count1=0,count2=0;
    scanf("%d",&s);     //s is the start of range.
    scanf("%d",&t);     //t is the end of the range.
    scanf("%d",&a);     //a is the location of apple tree.
    scanf("%d",&b);     //b is the location of the orange tree.
    scanf("%d",&m);     //m is the number of apples.
    scanf("%d",&n);     //n is the number of oranges.

    int arr1[m];
    int arr2[n];
    int res1[m];
    int res2[n];
                        //scaning the elements of the first array.
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
                        //scaning the elements of the second array.
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
                        //another array to store the resultant added                            //values of apples.
    for(i=0;i<m;i++)
    {
        res1[i]=a+arr1[i];
    }
                        //another array to store the resultant added                            //values of oranges.
    for(i=0;i<n;i++)
    {
        res2[i]=b+arr2[i];
    }
                        //count for apples.
    for(i=0;i<m;i++)
    {
        if(res1[i]>=s&&res1[i]<=t)
        count1++;
    }
                        //count for oranges.
    for(i=0;i<n;i++)
    {
        if(res2[i]>=s&&res2[i]<=t)
        count2++;
    }

    printf("%d\n",count1);
    printf("%d",count2);

return 0;
}
