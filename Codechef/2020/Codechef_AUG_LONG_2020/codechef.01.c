#include<stdio.h>
int main()
{
    int q, test;
    scanf("%d", &test);

    for(q = 0; q < test; q++)
    {
        int h, p, flag = 0;
        scanf("%d %d", &h, &p);

        while(p >= 1)
        {
            h = h - p;
            p = p/2;

            if(h <= 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
return 0;
}
