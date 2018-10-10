#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string s,t;
  cin >> n >> s >>t;

  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (s[i] == t[i]) continue;

    int p = -1;
    for (int j = i + 1; j < n; j++) {
      if (s[j] == t[i]) {
        p = j;
        break;
      }
    }

    if (p == -1) {
      cout << -1 << endl;
      return 0;
    }


    for (int j = p - 1; j >= i; j--) {
      swap(s[j], s[j + 1]);
      ans.push_back(j);
    }
  }

  cout << ans.size() << endl;
  for (auto a : ans) cout << (a + 1) << " ";
  cout << endl;
}
