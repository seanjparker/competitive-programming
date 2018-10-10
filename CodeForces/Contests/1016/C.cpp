#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int occ[1010];

int main() {
  int n, m, q; scanf("%d %d %d", &n, &m, &q);
  string s, t; cin >> s >> t;

  for (int i = 0; i < n; i++) {
    bool val = false;
    if (s.substr(i, m) == t) val = true;
    occ[i + 1] = occ[i] + val;
  }

  int q1, q2;
  while (q--) {
    scanf("%d %d", &q1, &q2);
    q1--; q2 -= m - 1;
    printf("%d\n", q2>=q1?occ[q2]-occ[q1]:0);
  }

}
