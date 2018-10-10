#include <bits/stdc++.h>

#define INF 0x3f3f3f3;
#define pii pair<int, int>

typedef long long ll;

using namespace std;

int getMean(vector<int> a) {
  int sum = 0;
  for (auto &e : a) sum += e;
  double mean = (double) sum / a.size();
  double fp, ip;
  fp = modf(mean, &ip);
  if (fp >= 0.5) ip += 1;
  return (int) ip;
}

int main() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);

  sort(a.begin(), a.end());

  int i = 0;
  while (getMean(a) < 5) {
    a[i++] = 5;
  }

  cout << i << "\n";
}
