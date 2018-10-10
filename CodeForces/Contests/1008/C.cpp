#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
   int n, p; cin >> n;
   map<int, int> a;
   for (int i = 0; i < n; i++) {
     scanf("%d", &p);
     a[p]++;
   }
   int mx = -INF;
   for (auto &i : a) {
     mx = max(mx, i.second);
   }
   cout << n - mx << "\n";
}
