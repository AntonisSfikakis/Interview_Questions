
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  int sgn(1);
  vector<int> v(n), a;
  for (int &x: v) {cin >> x;}
  for (int p = n - 1; p>=0; p--) {
    if (sgn * v[p] > 0) {
      a.push_back(p+1);
      sgn *= -1;
    } 
    
  } 
  cout << a.size() << "\n";
  for (int x : a) {cout << x << " ";}
  cout << endl;

}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tests;
  cin >> tests;

  while (tests--)
    solve();

  return 0;
}
