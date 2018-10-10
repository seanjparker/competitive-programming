#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
  int w;

  cin >> w;

  int p = !(w % 2) && (w > 2);

  cout << (p ? "YES" : "NO") << endl;

  return 0;
}
