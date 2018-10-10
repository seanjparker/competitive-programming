#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f3f3;

typedef long long ll;

int main() {
  string s;
  cin >> s;

  cout << s.size() << " ";

  int x = 0, y = 0;
  for (int i = 0; i < s.size(); i++) {
    int l = (int) s[i] - '0';
    x *= 2;  y *= 2;
    if (l == 1) x++;
    if (l == 2) y++;
    if (l == 3) {x++;y++;}
  }

  cout << x << " " << y << "\n";
}
