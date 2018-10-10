#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d, t;
  double g;
  cin >> n >> g;
  vector<pair<int, int> > ls;
  for (int i = 0; i < n; i++) {
    cin >> d >> t;
    ls.push_back({d, t});
  }

//v^2 = u^2 + 2as
//(deg * pi) / 180 = rad
  for (int i = 0; i < n; i++) {
    double s = 0.0;
    for (int j = i; j < n; j++) {
      double a = g * cos(ls[j].second * M_PI / 180);
      s = sqrt(pow(s, 2.0) + (2 * a * ls[j].first));
    }
    cout << setprecision(8) << s << endl;
  }
}
