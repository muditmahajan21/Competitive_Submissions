#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    //for(i=0;i<n;i++)
    //{
        //printf("%d\t",arr[i]);
    //}
    
    int m = n-1;
    if(m%2 == 0)
    {
        printf("%d",arr[m/2]);
    }
    else 
    {
        printf("%d",arr[(n+1)/2 - 1]);
    }
    return 0;
}
