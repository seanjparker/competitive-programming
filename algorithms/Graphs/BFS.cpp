#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;

const int N = 10;

vector<int> adj[N];
queue<int> q;
vector<bool> visited(N);
vector<int> distance(N);

void bfs(int x) {
  visited[x] = true;
  distance[x] = 0;
  q.push(x);
  while (!q.empty()) {
    int s = q.front(); q.pop();
    // process node s
    for (auto u : adj[s]) {
      if (visited[u]) continue;
      visited[u] = true;
      distance[u] = distance[s] + 1;
      q.push(u);
    }
  }
}

int main() {
  bfs(adj, 0);
}
