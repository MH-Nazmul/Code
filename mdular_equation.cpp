/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(void)
{
    int a, b, x;
    cin >> a >> b;
    int cnt = 0;
    if (a == b)
        cout << "infinity";
    else
    {
        x = a - b;
        for (int i = 1; i <= (x + 1) / i; i++)
        {
            if (x % i == 0)
            {
                if (i > b)
                    cnt++;
                if (i == x / i)
                    continue;
                if (x / i > b)
                    cnt++;
            }
        }
        cout << cnt;
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