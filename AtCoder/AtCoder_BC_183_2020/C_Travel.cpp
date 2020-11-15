#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int main()
{
    int N, K;
    cin >> N >> K;
    vector<vector<int>> T(N, vector<int>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> T[i][j];
        }
    }

    vector<int> C(N);

    for (int i = 0; i < N; i++)
    {
        C[i] = i;
    }

    int ans = 0;
    sort(C.begin(), C.end());
    do
    {
        if (C.at(0) != 0)
            break;
        ll cost = 0;
        int before = -1;

        for (int now : C)
        {
            if (before >= 0)
                cost += T[before][now];
            before = now;
        }
        cost += T[before][0];
        if (cost == K)
            ans++;
    } while (next_permutation(C.begin(), C.end()));

    cout << ans << endl;
    return 0;
}
