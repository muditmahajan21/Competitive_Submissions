#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll i, j, k, n,  count = 0, ans = 0, sum = 0;
    string s;
    char temp;
    vector<char> arr;
    
    cin >> s;

    for(i = 0; i < s.size(); i++)
    {
        if(s[i] != '+')
        {
            temp = (s[i]);
            arr.push_back(temp);
        }
    }

    sort(arr.begin(), arr.end());

    for(i = 0; i < arr.size(); i++)
    {   
        cout << arr[i];
        if(i != arr.size() - 1)
        {
            cout << '+';
        }
    }

    cout << endl;

return 0;
}
