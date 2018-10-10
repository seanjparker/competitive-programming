#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int maxl = 0;
  int maxc = 1;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
      ++maxc;
      if (maxc > maxl) {
        maxl = maxc;
      }
    } else {
      maxc = 1;
    }
  }
  cout << max(maxl, maxc);
}
