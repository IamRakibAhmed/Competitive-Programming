#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll dp[2000007];

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        memset(dp, 0, sizeof(dp));
        dp[0] = 0;

        for (int i = 1; i < n; i++)
        {
            dp[i] = dp[i - 1];

            if (a[i] < a[i - 1])
                dp[i] += (a[i - 1] - a[i]);
        }

        cout << dp[n - 1] << endl;
    }

    return 0;
}