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
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    int arr[m];
    int mx = 0;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        mp[a]++;
    }

    //  for(auto it:mp)
    //    {
    //      cout<<it.first<<" "<<it.second<<"\n";
    //    }
    //  cout<<"\n";

    if (m < n)
    {
        cout << 0;
        return;
    }

    for (auto it : mp)
    {
        mx = max(mx, it.second);
    }
    mx++;
    while (mx--)
    {
        int cnt = 0;
        for (auto v : mp)
        {
            if (v.second >= mx)
                cnt += v.second / mx;
        }
        if (cnt >= n)
        {
            cout << mx;
            return;
        }
    }
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