/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(void)
{
    int n, k;
    cin >> n >> k;
    char x[n + 1];
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        mp[x[i]]++;
    }

    char ch;
    int l, r, cnt = 0;
    map<char, int> dlt;
    for (int i = 0; i < n; i++)
    {

        if (mp[x[i - 1]] <= 0 && i > 0)
            cnt--;
        if (dlt.find(x[i]) == dlt.end())
            cnt++;
        mp[x[i]]--;
        if (cnt > k)
        {
            cout << "YES";
            return;
        }
        dlt[x[i]]++;
    }
    cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}