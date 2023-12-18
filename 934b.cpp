/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
#define all(x) x.begin(), x.end()


void solve(void)
{
    int n;
    cin>>n;
    if(n>34)
     cout<<"-1";
    else
    {
        int four=n%2;
        int eight=n/2;
        for(int i = 0;i < four;i++)
           {
            cout<<'4';
           }
        for(int i = 0;i < eight;i++)
           {
            cout<<'8';
           }
          
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