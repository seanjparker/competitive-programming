#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f3f3;

typedef long long ll;

struct well {
  int sx, sy, ex, ey;
};

int main() {
  int w, p;
  cin >> w >> p;
  vector<well> wells;

  int x, y;
  for (int i = 0; i < w; i++) {
    cin >> x >> y;
    wells.push_back({x, y, 0, 0});
  }

  int wi;
  for (int i = 0; i < p; i++) {
    cin >> wi >> x >> y;
    wells[wi].ex = x;
    wells[wi].ey = y;
  }

  vector<vector<int> > v;
  for (int i = 0; i < wells.size(); i++) {

  }

}

/*
Given a set of lines (with one end called “origin” or well). Is there a
subset L of the lines such that for every intersection of two lines
exactly one of the pipes intersection is in L?
Solution
1 Find all intersecting pairs of pipes (coordinates and number of
pipes are small, so don’t have to be careful).
2 Make graph: edge from pipe i to pipe j if they intersect.
3 Cleaning is possible if this graph is bipartite (send in robots to
one side of the bipartition).
*/
