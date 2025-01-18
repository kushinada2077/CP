#include <bits/stdc++.h>
using i64 = long long;

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  std::iota(a.begin(), a.end(), 1);
  a[1] = 1;
  a[n - 1] = 1;
  for (int i = 0; i < n; ++i) {
    std::cout << a[i] << " \n"[i == n - 1];
  }
}
int main() {
  std::cin.tie(nullptr)->sync_with_stdio(false);
  int t;
  std::cin >> t;
  while (t--) {
    solve();
  }
}