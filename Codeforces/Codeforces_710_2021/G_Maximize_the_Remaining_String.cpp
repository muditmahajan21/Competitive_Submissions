// Function that finds lexicographically
// smallest string after removing the
// duplicates from the given string
#include "bits/stdc++.h"
using namespace std;
string rdl(string s)
{
    // Stores the frequency of characters
    int cnt[26] = { 0 };
 
    // Mark visited characters
    int vis[26] = { 0 };
 
    int n = s.size();
 
    // Stores count of each character
    for (int i = 0; i < n; i++)
        cnt[s[i] - 'a']++;
 
    // Stores the resultant string
    string res = "";
 
    for (int i = 0; i < n; i++) {
 
        // Decrease the count of
        // current character
        cnt[s[i] - 'a']--;
 
        // If character is not already
        // in answer
        if (!vis[s[i] - 'a']) {
 
            // Last character > S[i]
            // and its count > 0
            while (res.size() > 0
                   && res.back() < s[i]
                   && cnt[res.back() - 'a'] > 0) {
 
                // Mark letter unvisited
                vis[res.back() - 'a'] = 0;
                res.pop_back();
            }
 
            // Add s[i] in res and
            // mark it visited
            res += s[i];
            vis[s[i] - 'a'] = 1;
        }
    }
 
    // Return the resultant string
    return res;
}
void solve(){
    string s;
    cin>>s;
    cout<<rdl(s);
	}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout  << endl;
	}
}