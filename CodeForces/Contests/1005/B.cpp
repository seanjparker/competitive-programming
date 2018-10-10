#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<pair<int,int> > p(n);
  for (int i=0;i<n;i++){
    cin>>p[i].first;
    p[i].second = i+1;
  }

  sort(p.rbegin(), p.rend());
  sort(p.begin(), p.begin() + k, [](auto &l, auto &r){
    return l.second < r.second;
  });

  int sum = 0;
  for (int i=0;i<k;i++) sum+=p[i].first;
  cout<<sum<<endl;

  int last = 0;
  for (int i=0;i<k-1;i++) {
    cout<< p[i].second - last << " ";
    last = p[i].second;
  }
  cout<<n - last<<endl;
}
