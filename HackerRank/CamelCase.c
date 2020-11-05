#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    scanf("%s",&str);
    int i,a=1;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=65&&str[i]<=90)
        a++;
        
    }
    printf("%d",a);
    return 0;
}
