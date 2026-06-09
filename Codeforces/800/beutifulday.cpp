#include <iostream> 
#include <set>

int main() {
  int n;
  std::cin >> n;
  int d1,d2,d3,d4;
  std::set<int> st;
  while (1) {
     st.clear();
     n++;
     d1 = n/1000;
     st.insert(d1);
     d2 = n%1000;
     d2 /=100;
     if (st.find(d2) != st.end()) continue;
     else st.insert(d2);
     d3 = n%100 ;
     d3 /= 10;
     if (st.find(d3) != st.end()) continue;
     else st.insert(d3);
     d4 = n%10;
     if (st.find(d4) != st.end()) continue;
     std::cout <<  n << std::endl;
     exit(0);

  }

  return 0;
}
