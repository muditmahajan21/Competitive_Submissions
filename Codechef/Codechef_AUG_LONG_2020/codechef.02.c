#include<stdio.h>
int main()
{
    int test, q;
    scanf("%d", &test);
    for(q = 0; q < test; q++)
    {
        int i, temp = 0, min = -1, flag = 0, n, k, res = -1;
        scanf("%d %d", &n, &k);

        int arr[n];

        for(i = 0; i< n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(i = 0; i < n; i++)
        {
            if(arr[i] <= k && k % arr[i] == 0)
            {
                temp = k / arr[i];
                flag++;

                if(flag == 1)
                {
                    min = temp;
                    res = arr[i];
                }

                else 
                {
                    if(temp < min)
                    {
                        min = temp;
                        res = arr[i];
                    }
                }
            }
        }

        if(res != -1)
        {
            printf("%d\n", res);
        }
        else 
        {
            printf("-1\n");
        }
    }
return 0;
}