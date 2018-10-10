#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
  int n; cin >> n;
  int a, b, m = -INF;
  while (n--) {
    scanf("%d %d", &a, &b);
    m = max(m, a + b);
  }
  cout << m << "\n";
}
