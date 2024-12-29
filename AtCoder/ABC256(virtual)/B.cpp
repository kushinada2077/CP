#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
#define PATH "/Users/leedongha/Downloads/PS/input.txt"
#define L_PATH "input.txt"
#define fastio cin.tie(0)->sync_with_stdio(0);
#define rep(n) for (int i = 0; i < n; ++i)
#define si(x) int(x.size())
#define all(x) (x).begin(), (x).end()
#define pb(...) push_back(__VA_ARGS__)
#define X first
#define Y second
#define ROOT 1
#define INF 0x3f3f3f3f
using namespace std;
using ll = long long;
using TP = tuple<int, int, int>;
// using P = pair<int, int>;

int n, A[105], P, pieces[4];
int main() {
  fastio;
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> A[i];
  for (int j = 0; j < n; ++j) {
    int i = A[j];
    pieces[0]++;
    for (int ii = 3; ii >= 0; --ii) {
      if (pieces[ii] == 0)
        continue;
      if (ii + i < 4) {
        pieces[ii + i] += pieces[ii];
        pieces[ii] = 0;
      } else {
        P += pieces[ii];
        pieces[ii] = 0;
      }
    }
  }

  cout << P << "\n";
}