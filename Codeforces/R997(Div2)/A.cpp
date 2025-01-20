#include <bits/stdc++.h>
using i64 = long long;

void solve() {
  int n, m;
  std::cin >> n >> m;
  int px, py;
  std::cin >> px >> py;
  int ans = 4 * m;

  for (int i = 0; i < n - 1; ++i) {
    int dx, dy;
    std::cin >> dx >> dy;
    int nx = px + dx, ny = py + dy;
    ans += 2 * (dx + dy);
  }

  std::cout << ans << "\n";
}
int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}