#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0);
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using TP = tuple<int, int, int>;
using P = pair<int, int>;

int n;
int main() {
  fastio;
  cin >> n;
  for (int x, i = 0; i < n; ++i) {
    cin >> x;
    if (x == 1) {
      cout << "HARD\n";
      return 0;
    }
  }

  cout << "EASY\n";
}