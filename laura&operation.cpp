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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << 1 << " " << 1 << " " << 1 << "\n";
        return;
    }
    if (a == b)
    {
        cout << 0 << " " << 0 << " " << 1 << "\n";
        return;
    }
    if (a == c)
    {
        cout << 0 << " " << 1 << " " << 0 << "\n";
        return;
    }
    if (c == b)
    {
        cout << 1 << " " << 0 << " " << 0 << "\n";
        return;
    }
    int mn = min(a, min(b, c));
    if (a > b && a > c)
    {
        if (b == c)
        {
            cout << 1 << " " << 0 << " " << 0 << "\n";
            return;
        }
        a += mn;
        if (b == mn)
        {
            if (a % 2 == 0)
            {
                cout << 0 << " " << 0 << " " << 1 << "\n";
                return;
            }
            else
            {
                --c -= mn;
                if (c % 2 == 0)
                {
                    cout << 0 << " " << 1 << " " << 0 << "\n";
                    return;
                }
                else
                {
                    cout << 1 << " " << 0 << " " << 0 << "\n";
                    return;
                }
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << 0 << " " << 1 << " " << 0 << "\n";
                return;
            }
            else
            {
                --b -= mn;
                if (b % 2 == 0)
                {
                    cout << 0 << " " << 0 << " " << 1 << "\n";
                    return;
                }
                else
                {
                    cout << 1 << " " << 0 << " " << 0 << "\n";
                    return;
                }
            }
        }
    }
    if (b > a && b > c)
    {
        if (a == c)
        {
            cout << 0 << " " << 1 << " " << 0 << "\n";
            return;
        }
        b += mn;
        if (a == mn)
        {
            if (b % 2 == 0)
            {
                cout << 1 << " " << 0 << " " << 0 << "\n";
                return;
            }
            else
            {
                --a -= mn;
                if (c % 2 == 0)
                {
                    cout << 0 << " " << 0 << " " << 1 << "\n";
                    return;
                }
                else
                {
                    cout << 0 << " " << 1 << " " << 0 << "\n";
                    return;
                }
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << 0 << " " << 1 << " " << 0 << "\n";
                return;
            }
            else
            {
                --b -= mn;
                if (b % 2 == 0)
                {
                    cout << 0 << " " << 1 << " " << 0 << "\n";
                    return;
                }
                else
                {
                    cout << 1 << " " << 0 << " " << 0 << "\n";
                    return;
                }
            }
        }
    }
    if (c > b && c > b)
    {
        if (b == a)
        {
            cout << 0 << " " << 0 << " " << 1 << "\n";
            return;
        }
        c += mn;
        if (b == mn)
        {
            if (c % 2 == 0)
            {
                cout << 1 << " " << 0 << " " << 0 << "\n";
                return;
            }
            else
            {
                --a -= mn;
                if (a % 2 == 0)
                {
                    cout << 0 << " " << 1 << " " << 0 << "\n";
                    return;
                }
                else
                {
                    cout << 0 << " " << 0 << " " << 1 << "\n";
                    return;
                }
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                cout << 0 << " " << 1 << " " << 0 << "\n";
                return;
            }
            else
            {
                --b -= mn;
                if (b % 2 == 0)
                {
                    cout << 1 << " " << 0 << " " << 0 << "\n";
                    return;
                }
                else
                {
                    cout << 0 << " " << 0 << " " << 1 << "\n";
                    return;
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}