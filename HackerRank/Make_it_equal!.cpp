#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,a[3],n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    cin>>a[0]>>a[1]>>a[2]>>n;
    sort(a,a+3);
    int d=0;
    d=a[1]-a[0];
    a[0]=a[0]+d;
    n=n-d;
    d=a[2]-a[1];
    n=n-(2*d);
    if(n%3==0&& n>0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
    
    
    return 0;
}
