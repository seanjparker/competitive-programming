#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  int t; cin >> t;

  while (t--) {
    int n;
    string s; cin >> n >> s;

    bool valid = true;
    for (int i = 0; i < n / 2; i++) {
      int d = abs(s[i] - s[n - i - 1]);
      if (d < 0 || d > 2 || d == 1) { valid = false; break; }
    }
    cout << (valid ? "YES" : "NO") << endl;
  }

}
