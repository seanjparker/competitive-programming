#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
  int n, a1, b1; cin >> n;
  pair<int, int> a[n];
  for (int i = 0; i < n; i++) {
    cin >> a1 >> b1;
    a[i] = {a1, b1};
  }

  int prev = max(a[0].first, a[0].second);
  for (int i = 1; i < n; i++) {
    if (prev < a[i].first && prev < a[i].second) {
      cout << "NO" << "\n";
      return 0;
    } else {
      if (prev >= a[i].first && prev >= a[i].second) prev = max(a[i].first, a[i].second);
      else if (prev < a[i].first) prev = a[i].second;
      else prev = a[i].first;
    }
  }
  cout << "YES" << "\n";
}
