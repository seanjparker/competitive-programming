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


char v[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};

bool nextIsC(string s, int i) {
  for (int j = 0; j < 6; j++)
    if (s[i] == tolower(v[j]) || s[i] == v[j]) {
      return 0;
    }
  return 1;
}

int main (int argc, char const *argv[]) {
  string s;
  string f;
  cin >> s;

  for (int i = 0; i < s.length(); i++) {
    bool cond1 = nextIsC(s, i);
    bool cond2 = isupper(s[i]);
    if(cond1 && !cond2) f += "." + string(1, s[i]);
    else if(cond1 && cond2) f += "." + string(1, tolower(s[i]));
  }

  cout << f << endl;

  return 0;
}
