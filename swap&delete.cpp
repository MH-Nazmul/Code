/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(void)
{
    string s;
    cin >> s;
    int one = 0, zero = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] % 2)
            one++;
        else
            zero++;
    }
    if (one == zero)
    {
        cout << 0 << endl;
        return;
    }
    if (one == 0 || zero == 0)
    {
        cout << n << endl;
        return;
    }
    int cost = 0;
    // cout<<cost<<" "<<one<<zero;;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (one > 0)
                one--;
            else
            {
                cout << zero << endl;
                return;
            }
        }
        else
        {
            // cout<<"ok";
            if (zero > 0)
                zero--;
            else
            {
                cout << one << endl;
                return;
            }
        }
    }
    cout << cost << endl;
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