#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define FORL(i, k) for (j; j < k; j++)
#define FOR(n) for (int i = 0; i < n; i++)

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

int n, m[3], o, p;

int main() {
  cin >> n;
  FOR(n) {
    for (int j = 0; j < 3; j++) {
      cin >> m[j];
    }

    for (int j = 0; j < 3; j++) {
      if (m[j] == 1) o++;
    }

    if (o >= 2) p++; o = 0;
  }

  cout << p << endl;

  return 0;
}
