#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        char str[100];
        int l;
        scanf("%d",&l);
        scanf("%s", str);
        int len = strlen(str);
        
        if(len<11)
        {
            printf("NO\n");
        }
        else 
        {   
            int j,count = 0;
            for(j = 0;j < len-10;j++)
            {
                if(str[j] == '8')
                {
                    count++;
                }
            }
            if(count >= 1)
            {
                printf("YES\n");
            }
            else 
            {
                printf("NO\n");
            }
        }
        
    }
    return 0;
}
