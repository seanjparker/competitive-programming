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

string s;
int occ=0;
int main () {
  cin >> s;

  for (char c : s) {
    if(c=='s') {
      occ++;
      if (occ>=2) break;
    } else {
      occ=0;
    }
  }
  if(occ>=2) {
    cout << "hiss"<< endl;
  } else {
    cout << "no hiss" << endl;
  }
  return 0;
}
