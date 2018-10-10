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

int n, w, h;

int main () {
  cin >> n >> w >> h;
  int s=0;
  double m = sqrt((w*w)+(h*h));
  for (int i=0;i<n;i++) {
    cin >> s;
    if (s<=m) {
      cout << "DA" << endl;
    } else {
      cout << "NE" << endl;
    }
  }
  return 0;
}
