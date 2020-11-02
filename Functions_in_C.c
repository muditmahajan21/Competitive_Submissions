#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d,max1,max2;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max_of_four(int a,int b, int c, int d){
        max1=a > b ? a : b;
        max2=c > d ? c : d;
        return max1>max2 ? max1:max2;
    }
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

