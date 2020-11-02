#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i, n, max, min;
    scanf("%d", &n);
    int arr[n];
    int max_count = 0, min_count  = 0;

    
    for(i = 0; i < n;i++)
    {
       scanf("%d", &arr[i]);
        if(i == 0)
        {
            max = arr[0];
            min = arr[0];
            continue;
        }
        if(arr[i] > max)
        {
            max_count++;
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min_count++;
            min = arr[i];
        }
        
    }    
    
    printf("%d %d", max_count, min_count);
    
    return 0;
}
