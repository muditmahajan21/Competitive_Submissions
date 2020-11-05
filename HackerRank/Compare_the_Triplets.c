#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum1=0,sum2=0;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    if(a>d)
        sum1++;
    else if(a<d)
        sum2++;
    
    if(b>e)
        sum1++;
    else if(b<e)
        sum2++;
    
    if(c>f)
        sum1++;
    else if(c<f)
        sum2++;
   
    printf("%d %d",sum1,sum2);
}
