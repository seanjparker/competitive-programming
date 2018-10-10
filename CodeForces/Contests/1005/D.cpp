#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;

vector<vector<int> > adj;
vector<bool> vis;

int current_preorder;
vector<int> preorder, max_preorder;
vector<int> sorted_by_preorder;

void dfs(int s) {
  if (vis[s]) return;
  vis[s] = true;

  sorted_by_preorder[current_preorder] = s;
  preorder[s] = current_preorder++;

  //process node s
  for (auto u : adj[s])
    dfs(u);

  max_preorder[s] = current_preorder - 1;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, q;
  cin >> n >> q;
  adj.resize(n);
  vis.resize(n);

  //constructing the tree
  for (int i=1;i<n;i++) {
    int parent;
    cin >> parent;
    adj[--parent].push_back(i);
  }

  preorder.resize(n);
  max_preorder.resize(n);
  sorted_by_preorder.resize(n);
  current_preorder = 0;
  dfs(0);



  for (int i=0;i<q;i++){
    int u, k;
    cin >> u >> k;
    u--;k--;
    k+=preorder[u];
    int answer = -1;
    if (k<=max_preorder[u]) {
      answer = sorted_by_preorder[k] + 1;
    }
    cout << answer << "\n";
  }

}
