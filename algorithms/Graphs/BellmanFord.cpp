/**
* Bellman-Ford finds the shortest distance from the start node
* to every other node in the graph, even if some of the edges
* have a negative weight
*
* It can also be used to determine if the graph has a negative cycle
*
* Average complexity: O(VE)
**/

#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;

const int N = 10;

//tuple is form (a, b, w) -> node a to b with weight w
vector<tuple<int, int, int> > edges(N + 1);
vector<int> distance(N + 1);

void bellman_ford(int x) {
  for (int i = 1; i <= N; i++) distance[i] = INF;

  distance[x] = 0;
  for (int i = 1; i <= N - 1; i++) {
    for (auto e : edges) {
      int a, b, w;
      tie(a, b, w) = e;
      distance[b] = min(distance[b], distance[a] + w);
    }
  }
}

int main() {
  bellman_ford();
}
