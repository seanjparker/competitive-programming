#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
  ll n, q; cin>>n>>q;
  while (q--) {
    ll x, y, num=0; cin>>y>>x;
    if ((x+y)%2 == 1) num += (n*n+1)/2;
    if (n%2==1&&(x+y)%2==0) num += ((y - 1)*n + 1)/2;
    else num += ((y-1)*n)/2;
    num += (x+1)/2;
    cout<<num<<endl;
  }
}
