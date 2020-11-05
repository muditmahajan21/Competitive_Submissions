#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf",&a,&l,&c,&f,&d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf",a,l,c,f,d);
    return 0;
}
