#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3;


static bool has[10000];
int num[10000];
vector<int> coins;

int N, x;

int solve(int x) {
  if (x < 0) return INF;
  if (x == 0) return 0;
  if (has[x]) return num[x];

  int best = INF;
  for (auto c : coins) best = min(best, solve(x - c) + 1);
  has[x] = true;
  num[x] = best;

  return best;
}

int main() {
  cin >> N >> x;

  int c = 0;
  for (int i = 0; i<N;i++) {
    scanf("%d", &c);
    coins.push_back(c);
  }
  cout << solve(x) << endl;
}
