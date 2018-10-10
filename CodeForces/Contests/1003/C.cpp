#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;
typedef long double ld;

int n, k;

double solve(vector<int> a) {
  double ans = 0;
  for (int i = 0; i <= n; i++) {
    for (int j = i + k; j <= n; j++) {
      ans = max(ans, 1.0*(a[j] - a[i]) / (j - i));
    }
  }

  return ans;
}

int main() {
  cin >> n >> k;

  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) cin >> a[i], a[i] += a[i - 1];

  cout << printf("%.10lf", solve(a)) << endl;

  return 0;
}
