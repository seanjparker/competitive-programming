#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
  int n, h; cin >> n >> h;
  pair<int, int> a[n];
  ll ps[n];

  int f, s; cin >> f >> s;
  a[0] = {f, s};
  ps[0] = s - f;
  for (int i = 1; i < n; i++) {
    scanf("%d %d", &f, &s);
    a[i] = {f, s};
    ps[i] = ps[i - 1] + (s - f);
  }

}
