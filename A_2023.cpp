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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i = 0;i < n;i++)
       {
        cin>>arr[i];
       }
    ll pr=1;
    for(int i = 0;i < n;i++)
       {
        pr*=arr[i];
       }
    if(2023%pr!=0)
    {
        cout<<"NO\n";
        return;
    }  
    cout<<"YES\n";
    ll val=2023/pr;
    for(int i = 0;i < k-1;i++)
       {
         cout<<1<<" ";
       }
    cout<<val<<"\n"; 
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