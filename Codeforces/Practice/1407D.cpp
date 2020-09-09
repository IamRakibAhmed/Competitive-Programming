#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> dp(n, n);
    dp[0] = 0;
    vector<int> x{0}, y{0};
    for (int i = 1; i < n; ++i)
    {
        dp[i] = min(dp[i - 1], dp[i - 1]) + 1;
        while (!x.empty() && a[i] >= a[x.back()])
        {
            int val = a[x.back()];
            x.pop_back();
            if (a[i] > val && !x.empty())
                dp[i] = min(dp[i], dp[x.back()] + 1);
        }
        while (!y.empty() && a[i] <= a[y.back()])
        {
            int val = a[y.back()];
            y.pop_back();
            if (a[i] < val && !y.empty())
                dp[i] = min(dp[i], dp[y.back()] + 1);
        }
        x.push_back(i);
        y.push_back(i);
    }
    cout << dp[n - 1] << endl;

    return 0;
}