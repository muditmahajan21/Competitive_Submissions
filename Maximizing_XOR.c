#include<stdio.h>
int main()
{
    int l,r,i,j;
    scanf("%d",&l);
    scanf("%d",&r);
    int max = -1;
    for(i=l;i<=r;i++)
    {
        for(j=i;j<=r;j++)
        {
            if((i^j) > max)
            max = i^j;
        }
    }
    printf("%d",max);
return 0;
}
