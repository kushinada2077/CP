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
string seq;
int main() {
  fastio;
  cin >> n >> seq;
  for (int sum = 0; sum <= 1000; ++sum) {
    int tot = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
      tot += seq[i] - '0';
      if (tot == sum) {
        tot = 0;
        cnt++;
      } else if (tot > sum) {
        cnt = 0;
        break;
      }
    }
    if (tot == 0 && cnt > 1) {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";
}