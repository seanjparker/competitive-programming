#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>
#include <string>
#include <set>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair
#define FOR(n) for (int i = 0; i < n; i++)

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef long long ll;
typedef vector<ll> vl;

int main () {
  ll n, k, d; set<ll> a;
  	cin>>n>>k;

  	for (d=1; d*d<=n; d++)
  		if (n%d==0)
  			a.insert({d, n/d});

  	if (k<=a.size())
  		cout<<*next(a.begin(),k-1);
  	else
  		cout<<-1;

  return 0;
}
