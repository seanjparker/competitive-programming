#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int a[n];
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);

  int rem = 0;
  for (int i = 0; i < n; i++) {
    cout << ((a[i] + rem) / m) << " ";
    rem = (a[i] + rem) % m;
  }
}
