#include <bits/stdc++.h>

#define INF 0x3f3f3f3;

typedef long long ll;

using namespace std;

int main() {
 int n;
 cin >> n;
 if (n % 3 == 0 || (n - 2) % 3 != 0) {
   cout << n - 2 << " " << 1 << " " << 1 << "\n";
 } else {
   cout << n - 3 << " " << 2 << " "<< 1 << "\n";
 }
}
