#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* S = (char *)malloc(10240 * sizeof(char));
    scanf("%s",S);
    int i,c=0,n = strlen(S);
   // printf("%c",S[n-1]);
    for(i=0;i<n;i=i+3){
        if(S[i]!='S')
            c++;

        if(S[i+1]!='O')
            c++;

        if(S[i+2]!='S')
            c++;
    }
    printf("%d",c);

    return 0;
}
