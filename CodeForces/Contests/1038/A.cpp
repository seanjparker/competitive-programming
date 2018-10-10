#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int f[26];

int main() {
  int n, k; cin >> n >> k;
  string s; cin >> s;


  for (auto &l: s)
    f[l - 'A']++;

  int minf = f[0];

  for (int i = 0; i < k; i++)
      minf = min(minf, f[i]);

  cout << minf * k << endl;


}
