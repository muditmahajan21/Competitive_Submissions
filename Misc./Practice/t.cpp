#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  string s;
  cin >> n;
  cin >> s;

  for(int i = 0; i < n; i++) 
  { 
    if(s[i] == '_') continue;
    bool flag = false;
    for(int j = i + 1; j < n; j++)
    {
      if(s[i] == s[j])
      {
        flag = true;
        s[j] = '_';
      }
    }
    if(flag) cout << s[i] << " ";
  }

  return 0;
}