/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
using ll = long long;
const int N = 1e5 + 10;
int vis[N];

void solve(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i]=make_pair(x, i);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[i]=make_pair(x, i);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c[i]=make_pair(x, i);
    }
    sort(all(a));
    sort(all(b));
    sort(all(c));
    int sum = 0;
    
     
      //1

       
       if(a[n-1].second != b[n-1].second && a[n-1].second != c[n-1].second &&  b[n-1].second != c[n-1].second)
           sum = max (sum,(a[n-1].first+b[n-1].first+c[n-1].first));
       if(a[n-1].second != b[n-1].second && a[n-1].second != c[n-2].second &&  b[n-1].second != c[n-2].second)
           sum = max (sum,(a[n-1].first+b[n-1].first+c[n-2].first));
       if(a[n-1].second != b[n-1].second && a[n-1].second != c[n-3].second &&  b[n-1].second != c[n-3].second)
           sum = max (sum,(a[n-1].first+b[n-1].first+c[n-3].first));    


       if(a[n-1].second != b[n-2].second && a[n-1].second != c[n-1].second &&  b[n-2].second != c[n-1].second)
           sum = max (sum,(a[n-1].first+b[n-2].first+c[n-1].first));
       if(a[n-1].second != b[n-2].second && a[n-1].second != c[n-2].second &&  b[n-2].second != c[n-2].second)
           sum = max (sum,(a[n-1].first+b[n-2].first+c[n-2].first));
       if(a[n-1].second != b[n-2].second && a[n-1].second != c[n-3].second &&  b[n-2].second != c[n-3].second)
           sum = max (sum,(a[n-1].first+b[n-2].first+c[n-3].first));     


       if(a[n-1].second != b[n-3].second && a[n-1].second != c[n-1].second &&  b[n-3].second != c[n-1].second)
           sum = max (sum,(a[n-1].first+b[n-3].first+c[n-1].first));
       if(a[n-1].second != b[n-3].second && a[n-1].second != c[n-2].second &&  b[n-3].second != c[n-2].second)
           sum = max (sum,(a[n-1].first+b[n-3].first+c[n-2].first));
       if(a[n-1].second != b[n-3].second && a[n-1].second != c[n-3].second &&  b[n-3].second != c[n-3].second)
           sum = max (sum,(a[n-1].first+b[n-3].first+c[n-3].first));    


       //2


       if(a[n-2].second != b[n-1].second && a[n-2].second != c[n-1].second &&  b[n-1].second != c[n-1].second)
           sum = max (sum,(a[n-2].first+b[n-1].first+c[n-1].first));
       if(a[n-2].second != b[n-1].second && a[n-2].second != c[n-2].second &&  b[n-1].second != c[n-2].second)
           sum = max (sum,(a[n-2].first+b[n-1].first+c[n-2].first));
       if(a[n-2].second != b[n-1].second && a[n-2].second != c[n-3].second &&  b[n-1].second != c[n-3].second)
           sum = max (sum,(a[n-2].first+b[n-1].first+c[n-3].first));    


       if(a[n-2].second != b[n-2].second && a[n-2].second != c[n-1].second &&  b[n-2].second != c[n-1].second)
           sum = max (sum,(a[n-2].first+b[n-2].first+c[n-1].first));
       if(a[n-2].second != b[n-2].second && a[n-2].second != c[n-2].second &&  b[n-2].second != c[n-2].second)
           sum = max (sum,(a[n-2].first+b[n-2].first+c[n-2].first));
       if(a[n-2].second != b[n-2].second && a[n-2].second != c[n-3].second &&  b[n-2].second != c[n-3].second)
           sum = max (sum,(a[n-2].first+b[n-2].first+c[n-3].first));     


       if(a[n-2].second != b[n-3].second && a[n-2].second != c[n-1].second &&  b[n-3].second != c[n-1].second)
           sum = max (sum,(a[n-2].first+b[n-3].first+c[n-1].first));
       if(a[n-2].second != b[n-3].second && a[n-2].second != c[n-2].second &&  b[n-3].second != c[n-2].second)
           sum = max (sum,(a[n-2].first+b[n-3].first+c[n-2].first));
       if(a[n-2].second != b[n-3].second && a[n-2].second != c[n-3].second &&  b[n-3].second != c[n-3].second)
           sum = max (sum,(a[n-2].first+b[n-3].first+c[n-3].first));    
    


       //3
       if(a[n-3].second != b[n-1].second && a[n-3].second != c[n-1].second &&  b[n-1].second != c[n-1].second)
           sum = max (sum,(a[n-3].first+b[n-1].first+c[n-1].first));
       if(a[n-3].second != b[n-1].second && a[n-3].second != c[n-2].second &&  b[n-1].second != c[n-2].second)
           sum = max (sum,(a[n-3].first+b[n-1].first+c[n-2].first));
       if(a[n-3].second != b[n-1].second && a[n-3].second != c[n-3].second &&  b[n-1].second != c[n-3].second)
           sum = max (sum,(a[n-3].first+b[n-1].first+c[n-3].first));    


       if(a[n-3].second != b[n-2].second && a[n-3].second != c[n-1].second &&  b[n-2].second != c[n-1].second)
           sum = max (sum,(a[n-3].first+b[n-2].first+c[n-1].first));
       if(a[n-3].second != b[n-2].second && a[n-3].second != c[n-2].second &&  b[n-2].second != c[n-2].second)
           sum = max (sum,(a[n-3].first+b[n-2].first+c[n-2].first));
       if(a[n-3].second != b[n-2].second && a[n-3].second != c[n-3].second &&  b[n-2].second != c[n-3].second)
           sum = max (sum,(a[n-3].first+b[n-2].first+c[n-3].first));     


       if(a[n-3].second != b[n-3].second && a[n-3].second != c[n-1].second &&  b[n-3].second != c[n-1].second)
           sum = max (sum,(a[n-3].first+b[n-3].first+c[n-1].first));
       if(a[n-3].second != b[n-3].second && a[n-3].second != c[n-2].second &&  b[n-3].second != c[n-2].second)
           sum = max (sum,(a[n-3].first+b[n-3].first+c[n-2].first));
       if(a[n-3].second != b[n-3].second && a[n-3].second != c[n-3].second &&  b[n-3].second != c[n-3].second)
           sum = max (sum,(a[n-3].first+b[n-3].first+c[n-3].first));    
       

       cout<<sum<<"\n";

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