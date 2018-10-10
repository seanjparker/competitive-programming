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

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;

string o;
char s[260];
int occ=1;
int main () {
  cin >> s;
  char l=s[0];
  for (int i=0;i<260;i++) {
    if(l==s[i]) {
      occ++;
    } else {
      occ=1;
    }
    if(occ<2) o+=l;
    l=s[i];
  }
  cout<<o;
  return 0;
}
