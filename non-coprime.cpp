/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(void)
{
    int n;
    cin >> n;
    if (n < 3)
    {
        cout << "No";
        return;
    }
    cout << "Yes\n";
    cout << n / 2 << " ";
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }
    cout << "\n";
    cout << (n / 2) + (n%2>0) << " ";
    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
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