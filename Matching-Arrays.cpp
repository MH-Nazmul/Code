/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
//=================================Definition Section==========================
#define ll long long int
#define vec vector<ll>
#define pa pair<ll, ll>
#define vecp vector<pa>
#define fi first
#define sc second

#define all(x) x.begin(), x.end()
#define pb(x) push_back(x);
#define ppb(x, y) push_back({x, y});

#define no cout << "No\n"
#define yes cout << "Yes\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nl cout << "\n"
//=====================================LETS BEGIN==============================

void solve(void)
{
  int n, x;
  cin >> n >> x;
  vec b(n), a(n), c(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    c[i]=a[i];
  }
  //c = a;
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
  if (n == 1)
  {
    if (x == 1)
    {
      if (a[0] > b[0])
      {
        cout << "YES\n";
        cout << b[0] << '\n';
        return;
      }
      else
      {
        cout << "NO\n";
        return;
      }
    }
    else
    {
      if (a[0] > b[0])
      {
        cout << "NO\n";
        return;
      }
      else
      {
        cout << "YES\n";
        cout << b[0] << '\n';
        return;
      }
    }
  }
  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end());
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > b[i])
    {
      cnt++;
    }
  }
  if (cnt < x)
  {
    cout << "NO\n";
    return;
  }
  int flag = 0, s = 1;
  for (int i = x; i < n; i++)
  {
    if (a[i] > b[n - s])
      flag = 1;
    s++;
  }
  if (flag == 1)
  {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
  sort(b.begin() + (x), b.end(), greater<int>());
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]] = b[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << mp[c[i]] << " ";
  }
  cout << '\n';
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}