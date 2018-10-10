#include <bits/stdc++.h>

#define INF 0x3f3f3f3;
#define pii pair<int, int>

typedef long long ll;

using namespace std;

int minimumSwaps(vector<int> arr) {

    pair<int, int> v[arr.size()];
    for (int i = 0; i < arr.size(); i++) {
        v[i] = {arr[i], i};
    }

    sort(v, v + arr.size());

    vector<bool> vis(arr.size(), false);
    int ans = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (vis[i] || v[i].second == i) continue;

        int j = i, cyc = 0;
        while(!vis[j]) {
            vis[j] = 1;

            cyc++;
            j = v[j].second;
        }
        if (cyc > 0) ans += cyc - 1;
    }

    return ans;

}

int main() {
  int n;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
  }

  int res = minimumSwaps(arr);

  cout << res << "\n";
}
