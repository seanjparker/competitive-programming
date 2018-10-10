#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int gcd(int a, int b) {
  while (a != b) {
    if (a > b) a = a - b;
    else b = b - a;
  }
  return a;
}
int sum(int n) {
  return n * (n - 1) / 2;
}

int main() {
  int n; cin >> n;
  if (n <= 2) { cout << "No" << endl; return 0; }
  int k = !(n & 1) ? n / 2 : (n + 1) / 2;
  cout << "Yes" << endl << "1 " << k << endl;
  cout << n - 1 << " ";
  for (int i = 1; i <= n; i++) {
    if (i == k) continue;
    else cout << i << " ";
  }
  cout << endl;
}
