#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;

int main() {
  int p, x, a, b, s[2]={0};
  cin >> a >> b >> x;
  x--;
  s[0] = a;
  s[1] = b;

  p = !(a >= b);

  for (int i = 0; i < a + b; i++) {
    cout << p;
    s[p]--;
    if (x>0) {x--; p^=1;}
    if (!s[p]) {s[p]--; p^=1;}
  }
}
