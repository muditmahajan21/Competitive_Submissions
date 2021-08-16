#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll test;
  cin >> test;
  while (test--) {
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    j = 0;
    k = 0;
    for (i = 0; i < 3; i++) {
      cin >> temp;
      j += temp;
    }
    for (i = 0; i < 3; i++) {
      cin >> temp;
      k += temp;
    }

    if (j > k) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
  }

  return 0;
}
