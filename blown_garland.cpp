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
    int l = s.length(),c=100;
    map<char, int> mp;
    while(c--){
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '!')
        {
            if (i < l - 4 && s[i + 4] != '!')
            {
                s[i] = s[i + 4];
                mp[s[i + 4]]++;
            }
            else if (i > 3 && s[i - 4] != '!')
            {
                s[i] = s[i - 4];
                mp[s[i - 4]]++;
            }
        }
        else if (s[i] != '!')
        {
            if (i < l - 4 && s[i + 4] == '!')
            {
                s[i + 4] = s[i];
                mp[s[i]]++;
            }
            else if (i > 3 && s[i - 4] == '!')
            {
                s[i - 4] = s[i];
                mp[s[i]]++;
            }
        }
    }
    }
    // cout<<s;
    cout << mp['R'] << " " << mp['B'] << " " << mp['Y'] << " " << mp['G'];
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