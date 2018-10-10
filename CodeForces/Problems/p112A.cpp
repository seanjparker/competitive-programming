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

string s;
string t;

int getLexo() {
  FOR(s.length()) {
    if ((int)(tolower(s[i])) < (int)(tolower(t[i]))) return -1;
    else if ((int)(tolower(s[i])) > (int)(tolower(t[i]))) return 1;
  }
  return 0;
}

int main () {
  cin >> s;
  cin >> t;

  cout << getLexo() << endl;

  return 0;
}
