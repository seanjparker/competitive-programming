#include <bits/stdc++.h>

#define INF 0x3f3f3f3;
#define pii pair<int, int>

typedef long long ll;

using namespace std;

int main() {
  int a, b, c, n; cin >> a >> b >> c >> n;
  if ((a + b) - 2*c > n || c > a || c > b) cout << -1 << "\n";
  else {
    int t = (a - c) + (b - c) + c;
    int r = n - t;
    cout << (r >= 1 ? r : -1) << "\n";
  }

}
