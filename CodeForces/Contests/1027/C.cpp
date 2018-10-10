#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  ll t, n, a; cin >> t;
  while (t--) {
    scanf("%lld", &n);
    map<ll, ll> m;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
      scanf("%lld", &a);
      m[a]++;
      if(m[a] >= 2) { v.push_back(a); m[a]-=2; }
    }
    sort(v.begin(), v.end());
    ll index=0,index1=1;
    for(int i=2;i<v.size();i++)if(v[i-1]*v[index1]>v[index]*v[i]){
      index=i-1;index1=i;
    }
    printf("%lld %lld %lld %lld\n",v[index],v[index],v[index1],v[index1]);
  }
}
