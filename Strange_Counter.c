#include<stdio.h>
int main()
{
    unsigned long long int i,t,n;
    scanf("%llu",&t);
    n = 3;
    while(t > n)
    {
        t = t-n;
        n = n*2;
    }
    i = n-t+1;
    printf("%llu",i);
return 0;
}
