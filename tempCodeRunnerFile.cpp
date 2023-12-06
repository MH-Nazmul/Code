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
    int l = 1;
    ll sum = 0;
    while (n--)
    {
        sum += l;
        l++;
        if (sum - k == n)
            break;
    }
    cout << n;
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