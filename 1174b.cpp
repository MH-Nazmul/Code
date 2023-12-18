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
    int arr[n];
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2)
            odd++;
        else
            even++;
    }
    if (odd && even)
        sort(arr, arr + n);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
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