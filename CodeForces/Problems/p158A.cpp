#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

using namespace std;
int n, k, a[101], b, c, d, e;

int main() {
  cin >> n;
  cin >> k;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  d = k - 1;
  b = a[d];
  if (a[d] > 0) {
    while (a[d++] == b) c++;
    cout << (c + (k - 1)) << endl;
  }

  d = k - 1;
  if (a[d] == 0) {
    while (d >= 0 && a[d] == 0) d--; c = d;
    cout << (a[d] == 0 ? 0 : (c + 1)) << endl;
  }

  return 0;
}
