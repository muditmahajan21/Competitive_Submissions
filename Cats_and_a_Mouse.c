#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int j,a,b;
        int arr[3];
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[j]);
        }
        for(j=0;j<3;j++)
        {
            a=arr[2]-arr[0];
                if(a<0)
                a=a*-1;
            b=arr[2]-arr[1];
                if(b<0)
                b=b*-1;
        }
        if(a>b)
        printf("Cat B\n");
        else if(a<b)
        printf("Cat A\n");
        else 
        printf("Mouse C\n");

    }
    return 0;
}
