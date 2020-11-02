
#include<stdio.h>
int main(){
int arr[200],index,i,j,n,temp,counter=0;

scanf("%d",&n);
arr[0]=1;
index=0;

for(j=n;j>=2;j--)
{
    temp=0;

    for(i=0;i<=index;i++)
    {
        temp = (arr[i] * j) + temp;
        arr[i] = temp%10;
        temp = temp/10;
    }


    while(temp>0)
    {
        arr[++index] = temp%10;
        temp = temp/10;
    }
}


for(i=index;i>=0;i--)
    {
      printf("%d",arr[i]);
    }
return 0;
}
