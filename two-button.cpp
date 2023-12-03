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
    int n, exp;
    cin >> n >> exp;
    int cnt = 0;
    if (n >= exp)
    {
        cout << n - exp;
        return;
    }
    while(exp>n)
    {
        if(exp%2>0)
        {
            exp++;
            cnt++;
        }
        exp/=2;
        cnt++;
    }
    cnt+=n-exp;
    cout << cnt;
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