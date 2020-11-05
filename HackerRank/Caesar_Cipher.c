#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    char str[n];
    scanf("%s", str);
    scanf("%d",&k);
    char ch;
    for(i=0;i<n;i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            ch = 'a';
            str[i] = ch + (str[i] - ch +k ) % 26;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            ch = 'A';
            str[i] = ch + (str[i] - ch + k) % 26;
        }
    }
    printf("%s",str);
return 0;
}
