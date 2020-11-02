#include<stdio.h>
int main()
{
    int q,test;
    scanf("%d",&test);
    for(q==0;q<test;q++)
    {
        int money,cost,wrapper,count = 0,temp = 0, counter = 0;
        scanf("%d %d %d",&money,&cost,&wrapper);
        count += money / cost;
        temp = money / cost;
        while(temp >= wrapper)
        {
            count += temp/wrapper;
            counter = temp/wrapper;
            temp -= (temp/wrapper) * wrapper;
            temp += counter;
        }
        printf("%d\n",count);
    }
return 0;
}
