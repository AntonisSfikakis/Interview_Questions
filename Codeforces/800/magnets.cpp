#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, a;
  std::cin >> n;
  if (n == 1) {
    std::cout << "1" ;
    return 0;
  } 
  int count = 1;
  int max = -1;
  int last_digit, first_digit;
  std::cin >> a;
  last_digit = a % 10;
  for (int i = 1; i < n; i++) {
    std::cin >> a;
    first_digit = a / 10;
    if (first_digit == last_digit)
      count++;
    
    if (count > max)
      max = count;
    last_digit = a % 10;
  }
  std::cout << max;
  return 0;
}
