#include <bits/stdc++.h>
using i64 = long long;

void solve() {
  int n;
  std::cin >> n;
  std::vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }

  i64 ans = 1LL * n * (n + 1) / 2;
  auto judge = [&](int v, int x) { return v <= x ? -1 : 1; };
  for (int x = 1; x <= 10; ++x) {
    std::vector<int> b(n + 1);
    for (int i = 0; i < n; ++i) {
      b[i + 1] = b[i] + judge(a[i], x);
    }

    std::map<int, int> c;
    for (int i = 0, j = 0; i < n; ++i) {
      if (a[i] == x) {
        while (j <= i) {
          c[b[j]]++;
          j++;
        }
      }
      ans -= c[b[i + 1]];
    }
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