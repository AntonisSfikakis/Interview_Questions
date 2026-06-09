args=("$@") 
output="${args[0]}.cpp"
dir="${args[1]}"
cd "$dir";
cat << 'EOF' > "$output"

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
EOF

echo "Created : $output"
