#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

ll gcd(ll x, ll y) {
  while (x != y) {
    if (x > y) {
      x -= y;
    } else {
      y -= x;
    }
  }
  return x;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll a, b, x, y; cin >> a >> b >> x >> y;
  ll g = __gcd(x, y);
  ll w = x / g, h = y / g;
  cout << min(a / w, b / h) << "\n";
}
