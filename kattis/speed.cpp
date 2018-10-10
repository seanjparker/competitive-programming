#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <unordered_map>
#include <sstream>
#include <iterator>
#include <iomanip>
using namespace std;

int n, t;
double ns, ps;

int main() {
  cin >> n >> t;

  ns = -1e7;
  ps = 1e7 + 1000;

  vector<double> dis(n), spd(n);
  for (int i = 0; i < n; i++) {
      cin >> dis[i] >> spd[i];
      ns = max(ns, -spd[i]);
  }

  while (ps - ns > 1e-7) {
    double c , tt = 0.0;
    c = (ps + ns) / 2;

    for (int i = 0; i < n; i++) {
      tt += dis[i] / (spd[i] + c);
    }

    if (tt > t)
      ns = c;
    else
      ps = c;
  }

  double finalC = (ps + ns) / 2;

  cout << fixed << setprecision(9) << finalC << endl;
}
