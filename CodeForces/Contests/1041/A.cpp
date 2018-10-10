#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
   int n; cin >> n;
   int a[n];
   for (int i = 0; i < n; i++) scanf("%d", &a[i]);
   sort(a, a + n);
   int minN = a[0], maxN = a[n - 1];
   if (maxN - minN + 1 == n) {
     cout << 0 << "\n";
   } else {
     cout << maxN - minN - 1 - (n - 2) << "\n";
   }
}
