#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  int n, m, p = 0;
  string s, t;
  scanf("%d %d ", &n, &m); cin >> s >> t;

  if (m + 1 < n) {cout << "NO" << endl; return 0;}

  int sp = s.find('*');
  if (sp == -1) {
    cout << (s == t ? "YES" : "NO") << endl;
    return 0;
  }

  for (int i = 0; i < sp; i++) {
    if (s[i] != t[i]) {
      cout << "NO" << endl;
      return 0;
    }
  }
  int j = 0;
  for (int i = n - 1; i > sp; i--) {
    if (s[i] != t[m - 1 - j]) {
      cout << "NO" << endl;
      return 0;
    }
    j++;
  }
  cout << "YES" << endl;
}
