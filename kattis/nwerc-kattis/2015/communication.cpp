#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f3f3;

typedef long long ll;

int main() {
  int n, s;
  cin >> n;

  map<int, int> m;
  for (int i = 0; i < (1<<8); i++) m[(i ^ (i << 1)) & 255] = i;
  for (int i = 0; i < n; i++) {
    cin >> s;
    cout << m[s] << " ";
  }
  cout << endl;
}
