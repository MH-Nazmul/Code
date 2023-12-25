/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
using ll= long long;
const int N = 1e5+10;


void solve(void)
{
    int n;
    cin>>n;
    int t=n;
    string s;
    cin>>s;
    int cnt=0;
    map<char,int>mp,vis;
    for(int i = 0;i < n;i++)
       {
        mp[s[i]]++;
       }
    for(int i = 0;i < n;i++)
       {
        if(vis[s[i]])
           continue;
        if(mp[s[i]]>=(s[i]-64))
          cnt++;
          vis[s[i]]=1;
       }
        
     cout<<cnt<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while (t--)
        solve();
    return 0;
}