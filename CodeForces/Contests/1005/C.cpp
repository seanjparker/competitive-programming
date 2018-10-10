#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll n;
  cin>>n;

  ll d[n];
  for(ll i=0;i<n;i++) cin>>d[i];

  ll ptr1 = 0, ptr2 = n - 1;
  ll ptr1_sum = d[ptr1], ptr2_sum = d[ptr2];
  ll ptr_eq = -1;

  while (!(ptr1 == ptr2)) {
    if (ptr1_sum == ptr2_sum){
      ptr_eq = ptr1_sum;
      if (++ptr1 > --ptr2) break;
      ptr2_sum += d[ptr2];
      ptr1_sum += d[ptr1];

    }


    if (ptr1_sum > ptr2_sum) {
      ptr2_sum += d[--ptr2];
    } else if(ptr1_sum < ptr2_sum) {
      ptr1_sum += d[++ptr1];
    }
  }

  //if (ptr1_sum == ptr2_sum) ptr_eq = ptr1_sum;

  cout << (ptr_eq>=0 ? ptr_eq : 0) << endl;
}
