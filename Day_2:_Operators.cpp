#include<stdio.h>
int main(void)
{
    int ans;
double p,t;
double m;
double c,n;
scanf("%lf",&m);
scanf("%lf",&p);
scanf("%lf",&t);
c=m+(p/100)*m+(t/100)*m;
n=c+0.5;
ans=n;
printf("%d",ans);
return 0;
}

