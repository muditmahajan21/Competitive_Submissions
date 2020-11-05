#include<stdio.h>
#include<string.h>
int abs(int);
int main() 
{
    char str[10000], rev[10000];
    int q,x,i;
    scanf("%d", &q);
    for (x = 0; x < q; x++) 
    {
        scanf("%s", str);
        int len = strlen(str);
        for (i = 0; i < len; i++) 
        {
            rev[i] = str[strlen(str) - i - 1];
        }
        int cnt = 1;
        for (i = 1; i < len; i++) 
        {
            if (abs(rev[i] - rev[i-1]) != abs(str[i] - str[i-1]))             {
                printf("Not Funny\n");
                cnt = 0;
                break;
            }     
        }
        if (cnt == 1)
        {
            printf("Funny\n");
        }
    }
return 0;
}
int abs(int n)
{
    if(n<0)
    {
        return n * (-1);
    }
    else  
        return n;
}
