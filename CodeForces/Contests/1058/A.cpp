#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
  int n; cin >> n;
  int a;
  for (int i = 0; i < n; i++){
    scanf("%d", &a);
    if (a == 1) { cout << "HARD" << "\n"; return 0; }
  }
  cout << "EASY" << "\n";
}
