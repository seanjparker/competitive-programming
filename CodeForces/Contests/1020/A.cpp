#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, h, a, b, k;
  cin >> n >> h >> a >> b >> k;
  pair<int, int> l1;
  pair<int, int> l2;
  while (k--) {
    cin >> l1.first >> l1.second >> l2.first >> l2.second;

    if (l1.first == l2.first) cout << abs(l1.second - l2.second) << endl;
    else {
      long long up;
      if (l1.second < a) up = a;
      else if (l1.second > b) up = b;
      else up = l1.second;

      cout << abs(l1.second - up) + abs(l1.first - l2.first) + abs(l2.second - up) << endl;
    }

  }

}
