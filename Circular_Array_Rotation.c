#include <stdio.h>
int main() 
{
  int i,n, k, q, t;
  scanf("%d %d %d", &n, &k, &q);
  int arr[n];
  
  for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
  while (q!=0) 
  {
    scanf("%d", &t);
    printf("%d\n", arr[(n + t - (k % n)) % n]);
    q--;
  }
  return 0;
}
