#include<stdio.h>
int main()
{
    int d,a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",a+b);
    if(a>b)
    d=a-b;
    else 
    d=b-a;
    printf("%d",d);
    return 0;


}
