#include <bits/stdc++.h>
int max = -1e4;
int main() {
  int n;
  int a, b;
  std::cin >> n;

  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    std::cin >> a >> b; 
    sum = b - a;
    if (sum > max) max = sum;
  }
  std:: cout << max;
  return 0; 
}
