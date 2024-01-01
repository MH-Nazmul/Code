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
    ll a, b;
    cin >> a >> b;
        ll val = a * b;
        ll gc = __gcd(a, b);
        val/=gc;
        if (val!=b)
        cout << val << "\n";
        else
        cout<<val*(b/a)<<"\n";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}