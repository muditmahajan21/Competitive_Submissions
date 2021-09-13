// #define _CRT_SECURE_NO_WARNINGS
// #include <iostream>
// #include <vector>
// #include <string>
// #include <map>
// #include <unordered_map>
// #include <set>
// #include <algorithm>
// #include <unordered_set>
// #include <math.h>
// #include <algorithm>
// #include <stack>
// #include <bitset>
// #include <intrin.h>
// #include <queue>
// using namespace std;

// typedef long long ll;
// const int MAXN = 1e6;
// const int L = 18;
// const int MOD = 998244353;
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

// int solve1(int l,int m,string s){
//   int i,j,k,n,count=0;
//   char current='F';
//   for(i=l;i<m+1;i++){
//     if(s[i]!=current && s[i]!='F'){
//       count++;
//       current=s[i];
//     }
//   }
//   if(count>0){
//     count=count-1;
//   }
//   return count;
// }
void solve(int l)
{
    int i,j,k,count=0,n,pre=0;
    cin>>n;
    string s;
    char current='F';
    cin>>s;
    for(i=0;i<s.size();i++){
      for(j=i;j<s.size();j++){
        // cout<<"heck"<<endl;
        // cout<<current<<s[j]<<endl;
        if(current!=s[j]&& s[j]!='F'){
          // cout<<"heck"<<endl;
          pre++;
          current=s[j];
        }
        if(pre>0){
          // cout<<"hell"<<endl;
          count=(count+pre-1)%1000000007;
        }

      }

      pre=0;
      current='F';
    }
    count=count%1000000007;
    cout<<"Case #"<<l<<": "<<count<<endl;
}

void multisolve()
{
	int t;
	cin >> t;
  int l=1;
	while (t--)
	{
		solve(l++);
	}
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("joke.txt", "w", stdout);

	multisolve();

	return 0;
}
