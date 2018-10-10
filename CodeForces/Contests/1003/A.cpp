#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;

int main() {
  int n;
  cin >> n;

  int a[n];
  int count[101];
  for (int i = 0; i < 101; i++) count[i] = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    count[a[i]]++;
  }

  int maximum = 0;
  for (int i = 0; i < 101; i++)
    maximum = max(maximum, count[i]);

  cout << maximum << endl;
}
