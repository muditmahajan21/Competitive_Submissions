#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, n, temp = 0, count = 0, ans = 0, sum = 0;
        ll nano = 1e9;
        ll h, m, s;
        cin >> h >> m >> s;

        h = h / nano;
        m = m  * 12 * 60/ (nano);
        s = s * 720 * 60 * 60 / (nano);
/*
        h = h * 12 / (1);
        m = (m) / (12 * 60);
        s = (s) / (720 * 60 * 6);

*/      
        sum = h + m + s;
        cerr << sum << endl;
       
        //cerr << h << " " << m << " " << s << endl;

        s = sum % 60;
        sum /= 60;
        m = sum % 60;
        sum /= 60;
        h = sum % 60;
        
        

        cout << "Case #" << test_case << ": " << h << " " << m << " " << s;
        cout << endl;
    }
return 0;
}

/*23400*/