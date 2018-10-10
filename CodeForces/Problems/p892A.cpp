#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define FORL(i, k) for (j; j < k; j++)
#define FOR(n) for (int i = 0; i < n; i++)

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int a[100001], b[100001], n;

int main () {
  cin>>n;
  for (int i=0;i<n;i++)cin>>a[i];
  for (int i=0;i<n;i++)cin>>b[i];
  sort(b, b+n, std::greater<int>());
  ll s=0;
  for (int i=0;i<n;i++) s+=a[i];

  cout<<(s>b[0]+b[1]?"NO":"YES");
  return 0;
}
