#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3

int coins[10000];

int N, x;

int solve(int x) {
  int value[x + 1];
  value[0] = 0;

  for (int i = 1; i <= x; i++) value[i] = INF;

  for (int i = 1; i <= x; i++) {
    for (auto c : coins) {
      if (i - c >= 0) {
        value[i] = min(value[i], value[i - c] + 1);
      }
    }
  }

  return value[x];
}

int main() {
  cin >> N >> x;

  for (int i = 0; i < N;i++) {
    cin >> coins[i];
  }
  cout << solve(x, N) << endl;
}
