#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<pair<int, int> > c;
  int a,b;
  ll sum_a = 0;
  ll sum_b = 0;

  for (ll i = 0; i < n; i++) {
    cin >> a >> b;
    sum_b += b;
    sum_a += a;
    c.push_back({a, b});
  }

  if (sum_b > m) {
    cout << -1 << endl;
    return 0;
  }
  if (sum_a <= m) {
    cout << 0 << endl;
    return 0;
  }

  sort(c.rbegin(), c.rend(), [](auto &left, auto &right) {
    return (left.first - left.second) < (right.first - right.second);
  });

  int count = 0;
  for (auto c1 : c) {
    if (sum_a - (c1.first - c1.second) <= m) {
      cout << count + 1;
      break;
    } else {
      sum_a -= (c1.first - c1.second);
      count++;
    }
  }

}
