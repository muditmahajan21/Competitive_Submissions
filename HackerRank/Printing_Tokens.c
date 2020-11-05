#include<string.h>
#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^\n]s",&str);
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==32)
        printf("\n");
        else 
        printf("%c",str[i]);
         
        
    }
    
    return 0;
}
