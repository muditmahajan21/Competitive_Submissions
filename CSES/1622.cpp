#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        string s;
        cin >> s;
        
        sort(s.begin(), s.end());

        set<string> res;
        
        do 
        {
                res.insert(s);
        }while(next_permutation(s.begin(), s.end()));
        
        /*
        for(int i = 0; i < res.size(); i++)
        {
                cout << res[i] << endl;
        }
        */
        cout << res.size() << endl;
        for(auto itr = res.begin(); itr != res.end(); itr++)
        {
                cout << *itr << endl;
        }
return 0;
}
