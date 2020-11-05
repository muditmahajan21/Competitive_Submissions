#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int q; 
    scanf("%d",&q);
    char hack[] = "hackerrank";
    int i,j=0,k;
    for(int k = 0; k < q; k++)
    {
        j=0;
        char str[10000];
        scanf("%s",str);
        for(i=0;i<strlen(str);i++)
        {
            if(hack[j] == str[i])
            {
                j++;
            }
        }

        if(j == 10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}
