/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) x.begin(), x.end()

void solve(void)
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    if(str1==str2)
    {
        cout<<"NO\n";
        return;
    }
    int l1, l2;
    l1 = str1.size();
    l2 = str2.length();
    map<char, int> mp1, mp2;
    vector<char> v1, v2;
    for (int i = 0; i < l1; i++)
    {
        mp1[str1[i]]++;
        if (mp1[str1[i]] == 1)
            v1.push_back(str1[i]);
    }
    for (int i = 0; i < l2; i++)
    {
        mp2[str2[i]]++;
        if (mp2[str2[i]] == 1)
            v2.push_back(str2[i]);
    }
    if (mp1.size() != mp2.size())
    {
        cout << "NO" << '\n';
        return;
    }
    if (v1 != v2)
    {
        {
            cout << "NO" << '\n';
            return;
        }
    }
    for (auto it : mp2)
    {
        if (it.second < mp1[it.first] || mp1.find(it.first) == mp1.end())
        {
            cout << "NO" << '\n';
            return;
        }
    }
    for (auto it : mp1)
    {
        if (mp2.find(it.first) == mp2.end())
        {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
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