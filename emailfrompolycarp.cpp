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
    int l1, l2;
    l1 = str1.length();
    l2 = str2.length();
    int j=0;
    if(l2<l1)
       {
        cout<<"NO\n";
       }
    else if(l1==l2)
       {  
        if(str1==str2)
           cout<<"YES\n";
        else   
           cout<<"NO\n"; 
       }  
    else{   
     for(int i = 0;i < l2;i++)
        {
         
          if(str2[i]==str1[j])
          {j++;}
          else if(str2[i]==str2[i-1] && i>0) 
                  {continue;}
          else
           {
            cout<<"NO\n";
            return;
           }
        }
    if(j==l1)
      cout<<"YES\n";   
    else 
      cout<<"NO\n"; 
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