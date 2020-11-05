#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int ans,t,i,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        if(x == y)
        {
            printf("0\n");
        }
        else if(x < y && (x-y)%2 ==0)
        {
            printf("2\n");
        }
        else if(x < y && (x-y)%2 != 0)
        {
            printf("1\n");
        }
        else if(x > y && (x-y) %2 == 0)
        {
            printf("1\n");
        }
        else if(x > y && (x-y) %2 != 0)
        {
            printf("2\n");
        }
    }
    return 0;
}
