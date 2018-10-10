#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int m;
  for (int i=0;i<n;i++){
    cin>>m;
    cout<<m-!(m&1)<<" ";
  }
  cout<<endl;
}
