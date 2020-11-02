#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int test,q;
    scanf("%d",&test);
    for(q=0;q<test;q++)
    {
        int i;
        char str[10000];
        scanf("%s",str);
        for(i=0;i<strlen(str);i++)
        {
            if(i%2==0)
            {
                printf("%c",str[i]);
            }
        }
        printf(" ");
        for(i=0;i<strlen(str);i++)
        {
            if(i%2!=0)
            {
                printf("%c",str[i]);
            }
        }
        printf("\n");
    }  
    return 0;
}
