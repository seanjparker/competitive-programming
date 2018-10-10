#include <iostream>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k) {
  deque<int> Qi(k);

  int i = 0;
  for (i = 0; i < k; i++) {
      while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) Qi.pop_back();
      Qi.push_back(i);
  }
  cout << Qi.front();
}

int main() {
  int arr[] = {12, 1, 78, 90, 57, 89, 56};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = 2;
  printKMax(arr, n, k);
  return 0;
}
