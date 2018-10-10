#include <bits/stdc++.h>

#define INF 0x3f3f3f3;
#define pii pair<int, int>

typedef long long ll;


using namespace std;

int main() {
  int n; cin >> n;
  string s; cin >> s;

  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    sum += s[i] - '0';
    bool d = true;
    int p = i + 1, sum2 = 0;
    while (p < n) {
      sum2 = s[p++] - '0';
      while (p < n && sum2 + s[p] - '0' <= sum) { sum2 += s[p] - '0'; p++; }
      if (sum2 != sum) d = false;
    }
    if (sum2 != sum) d = false;
    if (d) {cout << "YES" << "\n"; return 0; }
  }
  cout << "NO" << "\n";
}
