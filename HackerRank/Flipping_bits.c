#include<stdio.h>
void flip();
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        flip();
    }
    return 0;
}
void flip()
{
    unsigned int num,res;
    scanf("%u",&num);
    res = ~num;
    printf("%u\n",res);
}
