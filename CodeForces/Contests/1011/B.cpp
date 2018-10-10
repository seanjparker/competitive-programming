#include <bits/stdc++.h>

typedef long long ll;

#define INF 0x3f3f3f3f3;

using namespace std;


int main() {
  int n, m, p;
  cin >> n >> m;

  vector<int> c(101);

  for (int i = 1; i <= m; i++) cin >> p, c[p]++;

  for (int d = 100; d >= 1; d--) {
    vector<int> cc(c);
    int k = 0;
    for (int i = 1; i <= 100; i++)
      if (cc[i] >= d) {k += cc[i] / d; cc[i] = 0;}
    if (k >= n) {cout << d << endl; return 0;}
  }

  cout << 0 << endl;
}
