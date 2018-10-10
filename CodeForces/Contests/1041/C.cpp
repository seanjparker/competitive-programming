#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;
const int N = 200100;

set<pair<int, int> > q;

int a[N], ans[N];

int main() {
  int n, m, d; scanf("%d %d %d", &n, &m, &d);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
    q.insert({a[i], i});
  }

  int c = 0;
  while(!q.empty()) {
    c++;
    int p = q.begin()->second;
    ans[p] = c;
    q.erase(q.begin());
    while(true) {
      auto it = q.lower_bound({a[p]+1+d, 0});
      if (it == q.end()) break;
      p = it->second;
      q.erase(it);
      ans[p] = c;
    }
  }
  cout << c << "\n";
  for (int i = 1; i <= n; i++) cout << ans[i] << " ";
  cout << "\n";

}
