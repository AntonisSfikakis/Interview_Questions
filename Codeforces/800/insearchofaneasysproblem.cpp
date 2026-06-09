#include <bits/stdc++.h>
int main() {
  int n;
  std::cin >> n;
  int num;
  for (int i = 0; i < n; i++) {
    std::cin >> num;
    if (num) {
      std::cout << "HARD";
      return 0;
    }
  }
  std::cout << "EASY";
  return 0;
}
