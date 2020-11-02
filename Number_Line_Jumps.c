#include<stdio.h>
int main()
{
    int i,c=0,x1,v1,x2,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(i=1;i<100000;i++)
    {
        if(x1+v1*i==x2+v2*i)
        c++;
    }
    if(c>0)
    printf("YES");
    else 
    printf("NO");

return 0;

}
