/*                                     MH_Nazmul
                                  Let it be as simple
                                                                             */
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
using ll = long long;
const int N = 1e5 + 10;

void solve(void)
{
  ll n, k, cnt = 1;
  cin >> n >> k;
  if (k % 2)
    cout << 1;
  else
  {
    while (1)
    {
      if (!(k % 2))
      {
        cnt++;
        k /= 2;
      }
      else
      {
        cout << cnt;
        break;
      }
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin>>t;
  while (t--)
    solve();
  return 0;
}