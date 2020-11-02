#include<stdio.h>
int front(int,int);
int back(int,int);
int main()
{
    int n,p,i,j,count1 = 0,count2 =0;
    scanf("%d\n%d",&n,&p);
    count1 = front(n,p);
    count2 = back(n,p);
    if(count1 > count2)
        {   
            printf("%d",count2);
        }
    else if(count1 < count2)
        {
            printf("%d",count1);
        }
    else 
        {
            printf("%d",count1);
        }
return 0;
}
int front(int n, int p)
{
    int i,j,a,c = 0;
    if(p%2 ==0)
    {
        p++;
    }
    for(i=1;i<p;i=i+2)
    {
        c++;
    }
return c;
}
int back(int n,int p)
{
    int i,j,a,c =0;
    if(n%2 != 0)
    {
        n--;
    }
    for(i=n;i>p;i=i-2)
    {
        c++;
    }
return c;
}
