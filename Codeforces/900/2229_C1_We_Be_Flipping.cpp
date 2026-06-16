
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> seq;
  int operations = 0;
  bool all_pos = true;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] < 0) all_pos = false;
    if (v[i] > 0 && !all_pos) {
      operations++;
      seq.push_back(i + 1);
      for (int j = 0; j <= i; j++) {
        v[j] = -v[j];
      }
    }
    if (all_pos && i == n - 1) {
      cout << "\n1\n" << n << "\n";
      return;
    }
  }

  for (int i = n - 2; i >= 0; i--) {
    if (v[i] > 0) {
      operations++;
      seq.push_back(i + 1);
      for (int j = 0; j <= i; j++) {
        v[j] = -v[j];
      }
    }
  }

  cout << operations << "\n";
  if (!operations) {
    return;
  }
  for (int i = 0; i < seq.size(); i++)
    cout << seq[i] << " ";
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
