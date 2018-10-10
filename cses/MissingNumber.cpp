#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int a[n - 1];
  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &a[i]);

  }

  sort(a, a + n - 1);

  int c = 1;
  for (int i = 0; i < n; i++) {
    if (a[i] != c)
      break;
    else
      c++;
  }

  cout << c << endl;
}
