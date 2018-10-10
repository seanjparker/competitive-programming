#include <bits/stdc++.h>

typedef long long ll;

#define INF 0x3f3f3f3f3;

using namespace std;


int main() {
  string s;
  int n, k;
  cin >> n >> k >> s;
  sort(s.begin(), s.end());
  
  int sum = s[0] - 96;
  int sel = 1;
  int prev = 0;
  for (int i = 1; i < n && sel < k; i++) {
    if (abs(s[i] - s[prev]) > 1) sum += (s[i] - 96), sel++, prev = i;
  }

  if (sel != k) cout << -1 << endl;
  else cout << sum << endl;
}
