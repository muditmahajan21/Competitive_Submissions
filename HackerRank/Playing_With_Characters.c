#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
scanf("%c",&ch);
char s[20];
scanf("%s",s);
char sen[100];
scanf("%[^\t]",sen);
printf("%c\n",ch);
printf("%s",s);
printf("%s",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    return 0;
}

