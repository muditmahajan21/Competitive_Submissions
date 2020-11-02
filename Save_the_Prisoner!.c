#include<stdio.h>
void save();
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        save();
    }
return 0;
}
void save()
{
    int s,i,n,m,res,div;
    scanf("%d %d %d",&n,&m,&s);
    div = m + s - 1;
    if(div < n)
    {
        res = div;
    }
    else if(div > n)
    {
        res = div % n;
    }
    if(res == 0)
    {
        printf("%d\n",n);
    }
    else 
    {
        printf("%d\n",res);
    }
}
