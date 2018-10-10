#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>
#include <string>
#include <unordered_map>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int m;

template<typename Out>
void split(const string &s, char delim, Out result) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        *(result++) = item;
    }
}

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, back_inserter(elems));
    return elems;
}

bool vcomp (ll i,ll j) { return (i<j); }

int main() {
  cin >> m;
  for (int i=0;i<m;i++) {
    string s;
    cin >> s;
    vector<string> equs = split(s, '^');
    vector<ll> exps;
    ll e = 1;
    for (int i=1;i<equs.size();i++) {
      ll ei = stoi(equs[i]);
      e *= ei;
      exps.push_back(ei);
    }
    sort(exps.begin(), exps.end(), vcomp);

    

  }
  return 0;
}
