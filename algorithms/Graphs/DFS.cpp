#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;

vector<int> adj[0];
bool visited[0];

void dfs(int s) {
  if (visited[s]) return;
  visited[s] = true;

  //process node s

  for (auto u : adj[s]) {
    dfs(u)
  }
}

int main() {
  int N;
  cin>>N;

  adj.resize(N);


  dfs(0);
}
