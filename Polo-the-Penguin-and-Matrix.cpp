/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
//=================================Definition Section==========================
#define ll long long int
#define vec vector<ll>
#define pa pair<ll, ll>
#define vecp vector<pa>
#define fi first
#define sc second

#define all(x) x.begin(), x.end()
#define pb(x) push_back(x);
#define ppb(x, y) push_back({x, y});

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//=====================================LETS BEGIN==============================

void solve(void)
{
    int n, m, d;
    cin >> n >> m >> d;
    int sz = m * n;
    int arr[sz], v[sz];
    map<int, int> mp, mp1;
    for (int i = 0; i < sz; i++)
    {
        cin >> arr[i];
        v[i] = arr[i];
        mp1[arr[i]]++;
    }
    sort(v, v + sz);
    for (int i = 0; i < sz; i++)
    {
        arr[i] %= d;
        mp[arr[i]]++;
    }
    if (mp.size() > 1)
    {
        cout << -1;
        return;
    }
    int cnt, mn = 1e9 + 7;
    for (int i = 0; i < sz; i++)
    {
        cnt = 0;
        for (auto it : mp1)
        {
            cnt += (abs(v[i] - (it.fi)) / d)*(it.sc);
        }
        mn = min(cnt, mn);
    }
    cout << mn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}