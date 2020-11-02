#include<stdio.h>
int main()
{
    int b,n,m,i,j,x,temp;
    scanf("%d %d %d",&b,&n,&m);
    
    int key[n];
    int dri[m];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&key[i]);
    }

    for(i=0;i<m;i++)
    {
        scanf("%d",&dri[i]);
    }

    int max = 0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {   
            temp = key[i] + dri[j];
            if(temp<= b)
            {
                x = key[i] + dri[j];
                
                if(x > max)
                {
                    max = x;
                }
            }
        }
    }

    if (max == 0)
    {
        printf("-1");
    }
    else 
        printf("%d",max);
return 0;
}
