#include <iostream>
#include <algorithm>
using namespace std;


struct node {
  long t;
  long c;
};

bool compare(node a, node b) {
  return (a.t < b.t) || (a.t == b.t && a.c > 0);
}

int n;
node nodes[4000000];

int main() {
  cin >> n;

  for(int i = 0; i < 2*n; i+=2) {
    long l, r;
    cin >> l >> r;

    nodes[i].t = l;
    nodes[i].c = 1;

    nodes[i + 1].t = r;
    nodes[i + 1].c = -1;
  }

  sort(nodes, nodes + (2*n), compare);

  int c = 0;
  for(int i = 0; i < 2*n; i++) {
    c += nodes[i].c;

    if(c > 2) {
      cout << "NO" << endl;
      return 0;
    }
  }

  cout << "YES" << endl;
  return 0;
}
