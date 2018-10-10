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

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;


int n, m;

int main (int argc, char const *argv[]) {
  cin >> m;
  cin >> n;
  int o = floor((double)(m * n) / 2.0);
  cout << o << endl;;
  return 0;
}
