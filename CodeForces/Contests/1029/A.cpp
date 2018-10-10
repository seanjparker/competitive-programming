#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  string s, s1, s2; cin >> s;

  for (int i = s.length() - 1; i >= 0; i--) {
    s1 = s.substr(i, s.length());
    s2 = s.substr(s1.length(), s.length()) + s1;

    if (s == s2) break;
  }
  for (int i = 1; i < k; i++) s += s1;
  cout << s << endl;
}
