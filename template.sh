args=("$@") 
output="${args[0]}.cpp"
dir="${args[1]}"
cd "$dir";
cat << 'EOF' > "$output"

#include <bits/stdc++.h>
using namespace std;
#define int long long;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
EOF

echo "Created : $output"
