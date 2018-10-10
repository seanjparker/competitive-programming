#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>
#include <string>
#include <unordered_map>

using namespace std;

typedef unsigned long long ll;

int n, m;
string s[30];
unordered_map<string, string> tran;
unordered_map<string, int> corr, inc;

int main() {
  cin >> n;
  for (int i=0;i<n;i++) cin >> s[i];
  cin >> m;
  for (int i=0;i<m;i++) {
    string dut, eng, c;
    cin >> dut >> eng >> c;
    tran[dut] = eng;
    if (c == "correct") corr[dut]++;
    else inc[dut]++;
  }

  ll cc = 1, tc = 1;
  for (int i=0;i<n;i++) {
    tc *= corr[s[i]] + inc[s[i]];
    cc *= corr[s[i]];
  }

  if (tc==1) {
    for (int i=0;i<n;i++)
      cout << tran[s[i]] << " ";
    cout << endl;
    if (cc) cout << "correct" << endl;
    else cout << "incorrect" << endl;
  } else {
    cout << cc << " correct" << endl;
    cout << tc - cc << " incorrect" << endl;
  }


  return 0;
}
