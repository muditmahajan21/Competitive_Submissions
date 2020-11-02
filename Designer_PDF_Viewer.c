#include<string.h>
#include<stdio.h>
int main()
{
  int n,i,area;
  int arr[26];

  for(i=0;i<26;i++)
  {
    scanf("%d ",&arr[i]);
  }

  char str[100];
  scanf("%s", str);

  int len = strlen(str);

  int h = arr[str[0] - 97];

  for(i=1;i<len;i++)
  {
    if(h < arr[str[i] - 97])
    {
      h = arr[str[i] - 97];
    }
  }

  printf("%d",h * len);
return 0;
}
