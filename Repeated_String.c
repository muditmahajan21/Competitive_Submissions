#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int r,s=0,l,i,n,count=0,a,m=0;
    char str[100];
    scanf("%s",str);
    scanf("%llu",&n);
    l = strlen(str);
    a = n/l;
    for(i=0;i<l;i++)
    {
        if(str[i] == 'a')
        m++;
    }
    if(n%l == 0)
    {
        printf("%llu",m*a);
    }
    else if(n%l !=0)
    {
        r = n%l;
        for(i=0;i<r;i++)
        {
            if(str[i] == 'a')
            {
                s++;
            }
        }
        count = m*a+s;
        printf("%llu",count);
    }
return 0;
}
