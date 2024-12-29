#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0);
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using TP = tuple<int, int, int>;
using P = pair<int, int>;
ll n, m, k;
int main() {
  fastio;
  cin >> n >> m >> k;
  if (2 * n * m % k) {
    cout << "NO\n";
    return 0;
  }

  bool isEven = k % 2 == 0;
  if (isEven)
    k >>= 1;
  ll g = gcd(k, n), a = n / g, kp = k / g, b = m / kp;

  if (!isEven) {
    if (a < n)
      a *= 2;
    else
      b *= 2;
  }
  cout << "YES\n0 0\n" << a << " " << 0 << "\n" << 0 << " " << b << "\n";
}