#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void rm(char *s);
char* super_reduced_string(char* s){
    int len = strlen(s);
    int i;
    for(i = 0; i < len; i++){
        if(s[i] == s[i-1]){
            s[i] = s[i-1] = '$';
            rm(s);
            len = strlen(s);
            i = 0;
        }
    }
    return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = super_reduced_string(s);
    if(!strlen(result))
        printf("Empty String\n");
    else
        printf("%s\n", result);
    return 0;
}
void rm(char *s){
    int len = strlen(s);
    int i, j;
    j = 0;
    for(i = 0; i < len; i++){
        if(s[i] != '$'){
        s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
