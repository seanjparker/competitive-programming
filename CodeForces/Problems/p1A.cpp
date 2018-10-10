#include <iostream>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;

int n;
int m;
int a;

long long f;

int main() {
  cin >> n;
  cin >> m;
  cin >> a;

  f = ceil((double)n / a) * ceil((double)m / a);

  cout << f << endl;

  return 0;
}
