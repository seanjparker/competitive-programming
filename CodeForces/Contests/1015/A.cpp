#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m = 0;
  cin >> n >> m;

  bool points[m];
  memset(points, 0, m);

  int p1, p2;
  for (int i = 0; i < n; i++) {
    cin >> p1 >> p2;
    for (int j=p1;j<=p2;j++) {
      points[j - 1] = true;
    }
  }

  int num = 0;
  for (int i=0;i<m;i++) {
    if (!points[i]) num++;
  }
  cout << num << endl;

  if (num > 0) {
    for (int i=0;i<m;i++) {
      if (!points[i]) cout << (i + 1) << " ";
    }
  }

}
