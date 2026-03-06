#include <iostream>
#include <map>
#include <ostream>
#include <string>

void solve(int length, std::string input_string) {
  int count = 0; 
  std::map<char, int> mp;
  for (int i = 0; i < input_string.size(); i++) {

    auto it = mp.find(input_string.at(i));
    if (it == mp.end()) {
        count+=2;
        mp.emplace(input_string.at(i),1);
    }
    else count++;
  }

  std::cout << count << std::endl;
}

int main(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t, length;
  std::string input_string;

  std::cin >> t;
  for (int i = 0; i < t; i++) {
    std::cin >> length >> input_string;
    solve(length, input_string);
  }
}
