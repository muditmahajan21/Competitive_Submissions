#include<bits/stdc++.h>
using namespace std;


int main() {
    int prev, n, i, choice, temp, maximum;
    stack<int> s;
    
    cin >> n;
    
    while(n--)
    {
        cin >> choice;
        if(choice == 1)
        {
            cin >> temp;
            if(s.empty())
            {
                s.push(temp);
            }
            else  
            {
                s.push(max(temp, s.top()));
            }
        }
        else if(choice == 2)
        {
            if(!s.empty())
            {
                s.pop();
            }
        }
        else  
        {
            cout << s.top() << endl;
        }
    }
    return 0;
}
