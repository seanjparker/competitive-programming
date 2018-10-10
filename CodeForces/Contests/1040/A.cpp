#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

//0 -> white
//1 -> black
//2 -> no suit

int main() {
  int n, a, b; cin >> n >> a >> b;
  int c[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &c[i]);
  }
  map<int, int> v = {{0, a}, {1, b}};

  int cost = 0;
  for (int i = 0; i <= n / 2; i++) {
    if (!(!(n % 2) && i == n / 2)) {
      if (c[i] == 2 && c[n - i - 1] == 2) {
        cost += (i == n - i - 1) ? min(a, b) : 2 * min(a, b);
      } else if (c[i] == 2 && c[n - i - 1] != 2) {
        cost += v[c[n - i - 1]];
      } else if (c[i] != 2 && c[n - i - 1] == 2) {
        cost += v[c[i]];
      } else if (c[i] != c[n - i - 1]) {
        cout << "-1" << "\n"; return 0;
      }
    }
  }
  cout << cost << "\n";
}
