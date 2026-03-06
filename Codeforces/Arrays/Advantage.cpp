#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, num;
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    vector<int> array(n);
    for (int j = 0; j < n; j++) {
      cin >> num;
      array[j] = num;
    }
    vector<int> d(array);
    sort(array.begin(), array.end());
    int max = array[n - 1];
    int max2 = array[n - 2];
    for (int k = 0; k < n; k++) {
      if (d[k] == max)
        cout << max - max2 << " ";
      else 
         cout << d[k] - max << " ";
    }
    cout <<  "\n";
  }
  return 0;
}
