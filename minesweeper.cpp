/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(void)
{
    int n, m;
    cin >> n >> m;
    char x[n+2][m + 3];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> x[i][j];
        }
    }
    for(int i = 0;i <= m;i++)
       {
        x[0][i]='0';
        x[n+1][i]='0';
       }
    for(int i = 0;i <= n;i++)
       {
        x[i][0]='0';
        x[i][m+1]='0';
       }
        
     
    int cnt,flag=0;
    for (int i = 1; i <= n; i++)
    {
        cnt = 0;
        for (int j = 1; j <= m; j++)
        {
            cnt = 0;
            if (x[i][j] == '*')
                {continue;}
            if (x[i][j] == '.')
            {
                //cout<<'.';
                    flag = 1;
                if (x[i - 1][j] == '*')
                    flag = 0;
                if (x[i - 1][j - 1] == '*')
                    flag = 0;
                if (x[i - 1][j + 1] == '*')
                    flag = 0;
                if (x[i][j - 1] == '*')
                    flag = 0;
                if (x[i][j + 1] == '*')
                    flag = 0;
                if (x[i + 1][j] == '*')
                    flag = 0;
                if (x[i + 1][j + 1] == '*')
                    flag = 0;
                if (x[i + 1][j - 1] == '*')
                    flag = 0;
                if (flag == 0)
                {
                    cout << "No";
                    return;
                }
            }
            if(flag==1)
            {flag=0;continue;}
            if (x[i - 1][j] == '*')
                cnt++;
            // cout<<x[i-1][j]<<" ";
            if (x[i - 1][j - 1] == '*')
                cnt++;
            // cout<<x[i-1][j-1]<<"";
            if (x[i - 1][j + 1] == '*')
                cnt++;
            // cout<<x[i-1][j+1]<<" ";
            if (x[i][j - 1] == '*')
                cnt++;
            // cout<< x[i][j-1];
            if (x[i][j + 1] == '*')
                cnt++;
            // cout<<x[i][j+1]<<" ";
            if (x[i + 1][j] == '*')
                cnt++;
            // cout<<x[i+1][j]<<" ";
            if (x[i + 1][j + 1] == '*')
                cnt++;
            // cout<<x[i+1][j+1]<<" ";
            if (x[i + 1][j - 1] == '*')
                cnt++;
            // cout<<x[i+1][j-1]<<" \n";
             //cout<<cnt<<" ";
            if (cnt != (x[i][j] - '0'))
            {
                cout << "No";
                return;
            }
        }
        // cout<<endl;
    }
    cout << "Yes";
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