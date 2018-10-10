#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>
#include <string>
#include <unordered_set>
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

int o=0;
int main () {
  unordered_set<int> a;
  for (int i=0;i<=9;i++) {
    int s=0;
    cin >> s;
    s%=42;
    if(s < 42) {
      if(a.count(s)==0) {
        a.insert(s);
        o++;
      }
    }
  }
  cout << o << endl;
  return 0;
}
