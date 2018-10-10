#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;


string s[100];
int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  for (int i = 0; i < n; i++) {
    if (s[i].length() > 10) {
      char s1 = s[i][0];
      int s2 = s[i].length() - 2;
      char s3 = s[i][s[i].length() - 1];
      cout << s1 << s2 << s3 << endl;
    } else {
      cout << s[i] << endl;
    }
  }

  return 0;
}
