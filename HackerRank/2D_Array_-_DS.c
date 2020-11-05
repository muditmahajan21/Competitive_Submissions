#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[6][6],i,j,k,l;
    
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int sum[16];
    for(i=0;i<16;i++)
    {
        sum[i] = 0;
    }
    int a = 0;
    i = 2;
    for(l = 0; l < 16 && a < 4;l++)
    {   
        sum[l] = sum[l] + arr[a][i-2] + arr[a][i-1] + arr[a][i];
        i++;
        if(i == 6)
        {
            i = 2;
            a++;
        } 
    }

    i = 2;
    a = 2;
    for(l = 0; l < 16 && a < 6;l++)
    {   
        sum[l] = sum[l] + arr[a][i-2] + arr[a][i-1] + arr[a][i];
        i++;
        if(i == 6)
        {
            i = 2;
            a++;
        } 
    }

    i = 1;
    a = 1;
    for(l = 0; l < 16 && a < 5;l++)
    {
        sum[l] = sum[l] + arr[a][i];
        i++;
        if(i == 5)
        {
            i = 1;
            a++;
        }
    }
    int temp = 0;
    for(i = 0;i < 16;i++)
    {
        for(j = 0;j < 16;j++)
        {
            if(sum[i] < sum[j])
            {
                temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }
    
    printf("%d",sum[15]);

return 0;
}
