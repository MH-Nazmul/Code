/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(void)
{
    int n, m, h;
    cin >> n >> m >> h;
    int arr[n][m];
    int row[n], col[m];
    for (int i = 0; i < m; i++)
    {
        cin >> col[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> row[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] != 0)
                arr[i][j] = row[i];
        }
    }
     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] > col[i])
                arr[j][i] = col[i];
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (arr[n - 1][i] > col[i])
            arr[n - 1][i] = col[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
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