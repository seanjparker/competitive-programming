#include <bits/stdc++.h>

using namespace std;

vector<int> adj[1010];
int vis[1010];
int two = 0;
int dfs(int a) {
  if (++vis[a] >= 2) {two = a; return two;}
  for (auto u : adj[a])
    dfs(u);

  return two;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int p;
    cin >> p;
    adj[i].push_back(p);
  }

  for (int i = 1; i <= n; i++) {
    for (int i = 1; i <= n + 1; i++) vis[i] = 0;
    cout << dfs(i) << " ";
  }
  cout << endl;
}
