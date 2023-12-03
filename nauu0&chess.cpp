/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
using ll= long long;
#define all(x) x.begin(), x.end()


void solve(void)
{
    int n;
    cin>>n;
    int l=(n/2)+1;
    for(int i = 1;i <= l;i++)
       {
        cout<<1<<" "<<i<<'\n';
       }
    
    int more=n-l;
    int r=2;
    while(more--)
    {
     cout<<r<<" "<<l<<'\n';
     r++;
    }
        
     
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    //cin>>t;
    while (t--)
        solve();
    return 0;
}