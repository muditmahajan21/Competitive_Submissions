#include<stdio.h>
#include<math.h>
void square();
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        square();
    }
    return 0;
}
void square()
{
    int a,b,i,k,count=0;
    scanf("%d %d",&a,&b);
    for(i = sqrt(a);i <= sqrt(b);i++)
    {
        k = i*i;
        if(k >=a && k<=b)
        {
            count++;
        }
    }
    printf("%d\n",count);
}

