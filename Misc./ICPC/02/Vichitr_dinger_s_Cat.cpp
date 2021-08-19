#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;

#define all(v) (v).begin(),(v).end()
#define sz(v) (int)(v).size()
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define print(v) {for(auto i:v) cout<<i<<" ";cout<<endl;}
#define  endl    "\n"
#define  FIO      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//const lld pi = 3.14159265358979323846;
//#define mod    1000000007

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
  freopen("output.in", "w", stdout);
#endif
  FIO;
  int t;
  cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++)
      cin >> a[i];

    b = a;
    sort(all(b));

    unordered_map<int, int> mp;
    int freq = 1;
    int ans = 1, left = 0, right = 0;
    for (int i = 0; i < n; i++) {
      ans = 1, left = 0, right = 0;
      left = i - 0;
      right = (n - 1) - i;
      ans = max(ans, (min(left, right) * 2) + 1);

      mp[b[i]] = max(mp[b[i]], ans);
      //cout << b[i] << " " << ans << endl;
    }
    // for (auto i : mp) {
    //   cout << i.first << " " << i.second << endl;
    // }
    for (int i = 0; i < n; i++) {
      cout << mp[a[i]] << " ";
    }
    cout << endl;
  }
  return 0;
}