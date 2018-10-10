#include <bits/stdc++.h>

using namespace std;

bool binary(int array[], int& x, int& n) {
  int a = 0, b = n - 1;
  while (a <= b) {
    int k = (a + b) / 2;
    if (array[k] == x) return true;
    if (array[k] < x) a = k + 1;
    else b = k - 1;
  }
  return false;
}

int main() {
  int n = 7;
  int x = 1;
  int array[] = {2, 3, 6, 7, 11, 15, 16};
  cout << binary(array, x, n) << endl;
}
