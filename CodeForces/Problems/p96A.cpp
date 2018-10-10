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
#define FORL(j, k) for (int i = j; i < k; i++)
#define FOR(n) for (int i = 0; i < n; i++)

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

string s;
char p = '\0';
int cc = 1;

int main () {
  cin >> s;

  p = s[0];

  FORL(1, s.length()) {
    if (p == s[i]) {
      cc++;
    } else {
      cc = 1;
    }

    if (cc == 7) break;
    p = s[i];
  }

  cout << (cc == 7 ? "YES" : "NO") << endl;
  return 0;
}
