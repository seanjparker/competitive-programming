#include <bits/stdc++.h>

using namespace std;

long dp[250 + 10];
long getWays(long n, vector<long> coins) {
    dp[0] = 1;

    for (auto c : coins)
        for (int i = c; i <= n; i++)
          dp[i] += dp[i - c];

    return dp[n];
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    vector<long> c(m);
    for (int i = 0; i < m; i++)
      scanf("%ld", &c[i]);

    long ways = getWays(n, c);
    cout << ways << endl;

    return 0;
}
