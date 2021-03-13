#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        int n, i, sum, j, k, a, b, x;
        cin >> n;
        sum = (n * (n + 1)) / 2;

        if(sum % 2)
        {
                cout << "NO" << endl;
        }
        else 
        {
                cout << "YES" << endl;
                if(n % 2 == 0)
                {
                        k = n / 2;
                        int first[k], second[k];
                        a = b = 0;
                        for(i = 1, j = n; i <= k && j > k; i++, j--)
                        {
                                if(i % 2)
                                {
                                        first[a] = i;
                                        a++;
                                        first[a] = j;
                                        a++;
                                }
                                else
                                {
                                        second[b] = i;
                                        b++;
                                        second[b] = j;
                                        b++;
                                }
                        }
                        cout << k << endl;
                        for(i = 0; i < k; i++)
                        {
                                cout << first[i] << " ";
                        }
                        cout << endl;
                        cout << k << endl;
                        for(i = 0; i < k; i++)
                        {
                                cout << second[i] << " ";
                        }
                        cout << endl;
                }
                else
                {
                        k = n / 2;
                        x = k + 1;
                        int first[k], second[x];
                        a = b = 0;
                        
                        first[a] = 3;
                        a++;
                        second[b] = 1;
                        b++;
                        second[b] = 2;
                        b++;

                        if(n > 3)
                        {
                                for(i = 4, j = n; i < (4 + (n - 3) / 2) && j >= (4 + (n - 3) / 2); i++, j--)
                                {
                                        if(i % 2 == 0)
                                        {
                                                first[a] = i;
                                                a++;
                                                first[a] = j;
                                                a++;
                                        }
                                        else
                                        {
                                                second[b] = i;
                                                b++;
                                                second[b] = j;
                                                b++;
                                        }
                                }
                        }
                        cout << k << endl;
                        for(i = 0; i < k; i++)
                        {
                                cout << first[i] << " ";
                        }
                        cout << endl;
                        cout << x << endl;
                        for(i = 0; i < x; i++)
                        {
                                cout << second[i] << " ";
                        }
                        cout << endl;
                }
        }
return 0;
}
