#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll step(ll &h, ll &d) {
  if (h - d > 0)
    return h - d;
  else
    return h + d;
}

void solve(ll &n, ll &k, ll &s) {
    ll c = 1;
    if (k > s || k * (n - 1) < s){
      cout << "NO";
      return;
    }
    cout << "YES" << endl;
    ll dist = 0;
    for (ll i = k; i > 0; --i) {
      dist = min(n - 1, s - i + 1);
      c = step(c, dist);
      cout << c << " ";
      s -= dist;
    }
    cout << endl;
}

int main() {
  ll n, k, s;
  cin >> n >> k >> s;
  solve(n, k, s);
}
