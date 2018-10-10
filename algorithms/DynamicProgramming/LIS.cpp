#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3

int coins[10000];

int N, x;

int solve(int arr[], int n) {
  int lis[n];

  for (int i = 0; i < n; i++) lis[i] = 1;

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < i; j++) {

    }
  }
}

int main() {
  int arr[] = {10, 22, 9, 33, 21, 50, 41, 60};
  int n = sizeof(arr) / sizeof(int);
  printf("%d\n", solve(arr, n));
}
