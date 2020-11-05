#include<stdio.h>
int main()
{
    int n,i,a=0,b=0,c=0,d=0,e=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        switch(arr[i])
        {
            case 1:
            a++;break;

            case 2:
            b++;break;

            case 3:
            c++;break;

            case 4:
            d++;break;

            case 5:
            e++;break;
        }
    }
    int bird[5] = {a,b,c,d,e};

    

    int max = 0;
    int res = 0;
    
    for(i=0;i<5;i++)
    {
        if(bird[i] > max)
        {
            max = bird[i];
            res = i+1;
        }
    }
    printf("%d",res);
return 0;
}
