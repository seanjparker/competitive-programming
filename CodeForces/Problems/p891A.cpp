#include <bits/stdc++.h>

using namespace std;
int n, i, j, mi, t, x, a[2001];

int gcd( int x, int y )
{
   if( x < y )
      return gcd( y, x );

   int f = x % y;
   if( f == 0 )
     return y;
   else
      return gcd( y, f );
}

int main()
{
	cin >> n;
	mi = n + 1;

	for(i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] == 1) t++;
    j = i - 1; x = a[i];

    while(j > -1 && x > 1) {
			x = gcd(x, a[j]);
			j--;
		}
    if(x == 1) mi = min(mi, i - j - 1);
  }
	if(t > 0) cout << n - t;
	else if(mi > n) cout << "-1";
	else	cout << n - 1 + mi;

  return 0;
}
