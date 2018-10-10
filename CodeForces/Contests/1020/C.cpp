#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f3f3;

typedef long long ll;

pair<ll, ll> v[3010];
ll pv[3010];

int main() {
  ll n, m, pi, ci;
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v, v + n, [](auto &left, auto &right){
    return left.second > right.second;
  });

  ll ans = INF;
  bool vis[3010];
  int vote[3010];
  for (int i = 1; i <= n; i++) {
    memset(vis, 0, sizeof(vis));
    memset(vote, 0, sizeof(vote));

    ll sum = 0;
    for (int j = 0; j < n; j++) {
      if (v[j].first == 1) vote[1]++;
      else {
        if (vote[v[j].first] + 1 >= i) sum += v[j].second, vote[1]++, vis[j] = true;
        else vote[v[j].first]++;
      }
    }
    for (int j = n - 1; j >= 0; j--)
      if(v[j].first !=1 && !vis[j] && vote[1] < i) vis[j] = true, sum+=v[j].second, vote[1]++;
    ans = min(ans, sum);
  }
  cout << ans << endl;
}
