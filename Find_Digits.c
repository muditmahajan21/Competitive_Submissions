




#include<stdio.h>


#include<stdlib.h>


#include<assert.h>


#include<math.h>


int main()


{


int t;


scanf("%d\n",&t);


for(int i=1;i<=t;i++)


{


int e;


scanf("%d\n",&e);


int p=e;


int d,c=0;


while(p>0)


{


d=p%10;


if(d!=0 && e%d==0)


c++;


p=p/10;


}


printf("%d\n",c);


}


return 0;


}
