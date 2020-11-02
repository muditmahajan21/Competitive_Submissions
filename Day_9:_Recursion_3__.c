#include<stdio.h>
int fact(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(int n)
{
    int factorial;
    if(n>=1)
    {
        factorial=n*fact(n-1);
        return factorial;
    }
    else 
    return 1;
}
