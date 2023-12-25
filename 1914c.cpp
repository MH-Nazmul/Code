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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v;
    int a[n],b[n];
    for(int i = 0;i < n;i++)
       {
         cin>>a[i];
       }
    for(int i = 0;i < n;i++)
       {
         cin>>b[i];
       }
    for(int i = 0;i < n;i++)
       {
         v.push_back({a[i],b[i]});
       }
    sort(v.begin(),v.end()) ;
    
    //  for(auto it:v)
    //    {
    //      cout<<it.first<<" "<<it.second<<"\n";
    //    }
    //  cout<<"\n";
    int p=0;
    for(int i = n-1;i >0;i--)
       {
         if(v[i].second>=v[i-1].first)
           {p=i;break;}
       }
    ll sum=0;
    int mx=0;
    for(int i = n-1;i >=p;i--)
       {
          k--;
          sum+=v[i].first;
          if(k==0)
             break;
       }
    for(int i = p;i < n;i++)
       {
         mx=max(mx,v[i].second);
       }
       sum+=k*mx;
       cout<<sum<<endl;
          
     
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