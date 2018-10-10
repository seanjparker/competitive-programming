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

int n[9];
int s=0;
int main () {
  for (int i=0;i<9;++i){
    cin>>n[i];
    s+=n[i];
  }

  for (int i=0;i<8;++i) {
    for (int j=i+1;j<9;++j) {
      if(i==j) continue;
      if(s - n[i] - n[j] == 100) {
        for(int k=0;k<9;++k) {
          if(k==i||k==j) continue;
          cout<<n[k]<<endl;
        }
        return 0;
      }
    }
  }
  return 0;
}
