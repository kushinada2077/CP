#include <bits/stdc++.h>
using i64 = long long;

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> oudg(n + 1);
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      char c;
      std::cin >> c;
      if (c == '1' && i < j) {
        oudg[i]++;
      } else if (c == '0' && i > j) {
        oudg[i]++;
      }
    }
  }

  std::vector<std::pair<int, int>> p;
  for (int i = 1; i <= n; ++i) {
    p.push_back({-oudg[i], i});
  }
  sort(p.begin(), p.end());
  for (auto [_, i] : p) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}
int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}