/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
using ll = long long;
const int N = 1e5 + 10;

void solve(void)
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<pair<string, int>> lan(n);
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        lan[i].first = x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lan[i].second = x;
    }

    while (k--)
    {
        int a;
        cin >> a;
        int mn = 1e9, arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            mn = min(lan[arr[i] - 1].second, mn);
        }
        for (int i = 0; i < a; i++)
        {
            lan[arr[i] - 1].second = mn;
        }
    }
    // dbg(lan);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[lan[i].first] = lan[i].second;
    }
    ll sum = 0;
    while (m--)
    {
        string s;
        cin >> s;
        sum += mp[s];
    }
    cout << sum;
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