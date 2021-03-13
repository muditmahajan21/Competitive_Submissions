#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

vector<string> generate_gray(int n)
{
        if(n <= 0)
        {
                return {"0"};
        }
        else if(n == 1)
        {
                return {"0", "1"};
        }

        vector<string> rec_ans = generate_gray(n - 1);
        vector<string> main_ans;

        string s;

        for(unsigned int i = 0; i < rec_ans.size() ; i++)
        {
                s = rec_ans[i];
                main_ans.push_back("0" + s);
        }

        for(unsigned int i = 0; i < rec_ans.size(); i++)
        {
                s = rec_ans[i];
                main_ans.push_back("1" + s);
        }
        return main_ans;
}

void generate_gray_codes(int n)
{
        vector<string> result;
        result = generate_gray(n);
        
        sort(result.begin(), result.end(), greater<string>());

        for(unsigned int i = 0; i < result.size(); i++)
        {
                cout << result[i] << endl;
        }
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        cin >> n;
        generate_gray_codes(n);
return 0;
}
