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
    int n;
    cin >> n;
    int arr[n];
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (!(arr[i] % 2))
            even++;
    }
    if (even == n)
        cout << "Second";
    else
        cout << "First";
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