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
  string x;
  cin>>x;
  int p=-1,b=0,cnt=0,e=-1;
  for(int i=0;i<n;i++)
  {
    if(x[i]=='A')
    {
        p=i;
        break;
    }
  }
  for(int i=n-1;i>=0;i--)
  {
    if(x[i]=='B')
    {
        e=i;
        break;
    }
  }
  
  if(p ==-1 || e==-1 || p>e)
  {
    cout<<0<<'\n';
    return;
  }
  cout<<e-p<<'\n';

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