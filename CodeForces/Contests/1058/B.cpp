#include <bits/stdc++.h>

#define INF 0x3f3f3f3;
#define pii pair<int, int>

typedef long long ll;


using namespace std;

int main() {
  int n, d, m; cin >> n >> d >> m;
  while (m--) {
    int x, y; cin >> x >> y;
    bool w = false;
    if (x+y>=d&&x-y<=d&&x+y<=(2*n-d)&&x-y>=-d) w=true;
    cout << (w ? "YES" : "NO") << "\n";
  }
}
