/*
*   author: Rakib Ahmed
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll MOD = 1000000007;

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, l, r;
    ll x, y, z;

    cin >> n >> l >> r;

    x = (r / 3) - (l / 3) + (l % 3 == 0);
    y = ((r + 2) / 3) - ((l + 2) / 3) + (l % 3 == 1);
    z = ((r + 1) / 3) - ((l + 1) / 3) + (l % 3 == 2);

    ll dp[200005][3];

    dp[0][0] = x;
    dp[0][1] = y;
    dp[0][2] = z;

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = ((x * dp[i - 1][0]) % MOD + (z * dp[i - 1][1]) % MOD + (y * dp[i - 1][2]) % MOD) % MOD;
        dp[i][1] = ((y * dp[i - 1][0]) % MOD + (x * dp[i - 1][1]) % MOD + (z * dp[i - 1][2]) % MOD) % MOD;
        dp[i][2] = ((z * dp[i - 1][0]) % MOD + (y * dp[i - 1][1]) % MOD + (x * dp[i - 1][2]) % MOD) % MOD;
    }

    cout << dp[n - 1][0] << endl;

    return 0;
}