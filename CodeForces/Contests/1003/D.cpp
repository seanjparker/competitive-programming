#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

using namespace std;

typedef long long ll;
typedef long double ld;

int main() {
  int n, q;
	cin >> n >> q;

	vector<int> count(31);
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		++count[__builtin_ctz(x)];
	}

	while (q--) {
		int x;
		cin >> x;

		int ans = 0;
		for (int i = 30; i >= 0 && x > 0; --i) {
			int r = min(x >> i, count[i]);
			ans += r;
			x -= (1 << i) * r;
		}

		if (x > 0)
			ans = -1;
		cout << ans << endl;
	}
}
