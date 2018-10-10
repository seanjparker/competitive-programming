#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;

const int N = 20;

//number of moves we make to go from (0, 0) to halfway
int half;

ll a[N][N];

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  half = n + m - 2;
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      cin >> a[i][j];
    }
  }

}
