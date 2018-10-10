#include <bits/stdc++.h>

using namespace std;

long long n;

int main() {
  scanf("%i", &n);
  cout << n << " ";

  while (n > 1) {
    if (!(n & 1))
      n /= 2;
    else
      n = n * 3 + 1;

    cout << n << " ";
  }
}
