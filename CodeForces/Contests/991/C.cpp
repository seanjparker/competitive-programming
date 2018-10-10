#include <bits/stdc++.h>

#define INF 0x3f3f3f3;
#define pii pair<int, int>

typedef long long ll;

using namespace std;

bool work(ll k, ll n) {
  ll s = 0;
  ll cur = n;
  while (cur > 0) {
    ll o = min(cur, k);
    s += o;
    cur -= o;
    cur -= cur / 10;
  }

  return s * 2 >= n;
}

int main() {
  ll n; cin >> n;
  ll ans = 0;
  ll l = 1, r = n;
  while (l <= r) {
    ll k = (l + r) / 2;

    if (work(k, n)) {
      r = k - 1;
      ans = r;
    } else {
      l = k + 1;
    }
  }
  cout << ans + 1 << "\n";
}
