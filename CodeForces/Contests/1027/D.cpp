#include <bits/stdc++.h>

typedef long long ll;

#define white 0
#define grey 1
#define black 2


using namespace std;

const int N = 200001;

int cost[N], vis[N];
vector<int> adj[N];
stack<int> s;
int ans = 0;

void dfs(int a) {
  vis[a] = grey;
  int next_node = adj[a][0];
  s.push(a);
  if (vis[next_node] == white) {
    dfs(next_node);
  } else if(vis[next_node] == grey) {
    //cycle
    int minCost = cost[next_node];
    while (s.top() != next_node) {
      minCost = min(minCost, cost[s.top()]);
      s.pop();
    }
    while(!s.empty()) s.pop();
    ans+=minCost;
  }
  vis[a] = black;
}

int main() {
  int n, m; cin>>n;
  for (int i = 0; i < n; i++) {
    scanf("%d", &cost[i]);
  }

  for (int i = 0; i < n; i++) {
    scanf("%d", &m);
    adj[i].push_back(m - 1);
  }

  for (int i = 0; i < n; i++) {
    if (vis[i] == white) dfs(i);
  }

  cout << ans << endl;
}
