
#include <stdio.h>
void sort(int n, int *  ar) {

   int j,tmp=ar[n-1],k;
    for(j=n-1; j>=1;j--)
        {
            if(tmp<ar[j-1])
                ar[j]=ar[j-1];
            else
                break;
        for(k=0; k<n;k++)
        printf("%d ", ar[k]);
        printf("\n");
        }
    ar[j]=tmp;
    for(k=0; k<n;k++)
        printf("%d ", ar[k]);

}
int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    sort(n, arr);
    return 0;
}
