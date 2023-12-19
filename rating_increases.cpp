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
    int l = s.length(),i;
    string a, b;
    // cout<<l;
    a+=s[0];
    for( i = 1;i < l;i++)
       {
        if(s[i]!='0')
          break;
        a+=s[i];  
       }
       if(a==s)
        {
             cout<<-1<<endl;
             return;
        }
    for(int ii = i;ii < l;ii++)
       {
         b+=s[ii];
       }
    //cout<<a<<" "<<b;
    if(a.length()>b.length())
     {
        cout<<-1<<endl;

    }  
    else if(a==b)
    {
        cout<<-1<<endl;

    }  
    else if(a.length()==b.length())
    {
        if(a[0]>b[0])
           cout<<-1<<endl;
        else   
        cout<<a<<" "<<b<<endl;   
          
    }
    else
    {
        cout<<a<<" "<<b<<endl;
    }
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