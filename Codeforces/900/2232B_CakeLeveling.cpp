#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int length;
  for (int i = 0; i < n; i++) {
    cin >> length;
    vector<int> max_v(length);
    for (int j = 0; j < length; j++) {
        cin >> max_v[j]; 
    }

    vector<int> ans;
    ans.push_back(max_v[0]);
    int crsum = max_v[0];
    for (int j = 1; j < length; j++) {
        crsum += max_v[j];
        ans.push_back(min(ans[j-1],crsum/(j+1)));
        // for every iteratation the level of frost should be even 
    }

    for (int k = 0; k < length; k++) {
      cout << ans[k] << " "; 
    }
    cout <<  endl; 
  }
  return 0;
}
