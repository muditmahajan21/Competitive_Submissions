#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    char *str[n];
    for(i=0;i<n;i++)
    {
        str[i] = (char *) malloc (500 * sizeof(char ));
        scanf("%s",str[i]);
    }
    int a = 0,b = 0,c = 0,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            a = 0;
            for(k=0;k<m;k++)
            {
                if(str[i][k] == '1' || str[j][k] == '1')
                {
                    a++;
                    if(a > b)
                    {
                        b = a;
                        c = 0;
                    }
                    
                }
                if(b == a)
                    {
                        c++;
                    }
            }
        }
    }
    printf("%d\n%d",b,c);
return 0;
}
