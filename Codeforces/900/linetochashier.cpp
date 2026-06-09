#include <bits/stdc++.h>
#include <climits>
#include <ios>
#include <vector>

int scanItem(int n) { return n * 5; }

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  int caches;
  std::cin >> caches;

  std::vector<long long> v(caches);
  for (int i = 0; i < caches; ++i) {
    std::cin >> v[i];
  }


  int products;
  int mn = INT_MAX;
  for (int i = 0; i < caches; i++) {
    long long  sum = 0;
    for (int j = 0; j < v[i]; j++) {
      std::cin >> products;
      sum += scanItem(products);
      sum += 15;
    }
    if (sum < mn) mn = sum; 
   
  }
  std::cout << mn;
  return 0;
}
