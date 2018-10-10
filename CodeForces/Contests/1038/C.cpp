#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

ll p1, p2, m, as, bs, player;
ll a[100010], b[100010];

int main() {
  int n; cin >> n;
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  for (int i = 0; i < n; i++) scanf("%d", &b[i]);
  sort(a, a + n);
  sort(b, b + n);
  reverse(a, a + n);
  reverse(b, b + n);

  while (m < 2 * n) {
    m++;
    if (!player) {
      if (a[p1] >= b[p2]) { as += a[p1]; p1++; }
      else p2++;
    } else {
      if (b[p2] >= a[p1]) { bs += b[p2]; p2++; }
      else p1++;
    }
    player ^= 1;
  }
  cout << as - bs << endl;
}
