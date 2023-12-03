/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include<bits/stdc++.h>
using namespace std;
//=================================Definition Section==========================
#define ll long long int
#define vec vector<ll>
#define pa pair <ll,ll>
#define vecp vector<pa>
#define fi first
#define sc second

#define all(x) x.begin(),x.end()
#define pb(x) push_back(x);
#define ppb(x,y) push_back({x,y});

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//=====================================LETS BEGIN==============================


void solve(void)
{
 int n;
 cin>>n;
 char x[n+1];
 int cnt=0,range=0,dot=0;
 for(int i=0;i<n;i++)
 {
   cin>>x[i];
   if(x[i]=='.')
   {
    cnt++;
    dot++;
   }
   if(x[i]!='.' || i==n-1)
   {
    range=max(range,cnt);
    cnt=0;
   }
 }
 //cout<<range;
 if(range>=3)
 {
    cout<<2<<'\n';
 }
 else{
    cout<<dot<<'\n';
 }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t=1;
  cin>>t;
  while(t--)
  solve();
  return 0;
}