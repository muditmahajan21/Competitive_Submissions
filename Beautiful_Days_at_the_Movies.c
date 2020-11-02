#include<stdio.h>
int abs(int);
int main() {
int a,b,c,count=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int temp=a;temp<=b;temp++)
        {
        int p=temp,rev=0;
        while(p!=0)
            {
            rev=rev*10+(p%10);
            p=p/10;
        }
        if(abs(rev-temp)%c==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
int abs(int n)
{
    if(n < 0)
    {
        n = n * (-1);
        return n;
    }
return n;
}
