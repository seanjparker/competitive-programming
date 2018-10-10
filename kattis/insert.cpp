//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

#define INF 0x3f3f3f3f
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define MAX 1000100
#define mp make_pair

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vector<ii> > vvii;
typedef unsigned long long ll;

int factorial(int n) {
  return n<=1 ? 1 : n*factorial(n-1);
}

int f(int a, int b) {
  return factorial(a+b)/(factorial(a)*factorial(b));
}

template <typename T>
int n(vector<T>& p) {
  if (p.size() <= 1) return 1;
  vector<T> l, r;
  for (int i = 1; i < p.size(); i++) {
    if (p[i] < p[0])
      l.push_back(p[i]);
    else
      r.push_back(p[i]);
  }
  return n(l)*n(r)*f(l.size(),r.size());
}

int main () {
  int a = 0;
  vector<vector<int> > t;

  while (scanf("%d", &a) != 0) {
    int v=0;
    for (int i=0;i<a;i++) {
      scanf("%d", &v);
      t[i].push_back(v);
    }
  }
  for (int i=0;i<t.size();i++)
    cout << n(t[i]) << endl;
  return 0;
}
