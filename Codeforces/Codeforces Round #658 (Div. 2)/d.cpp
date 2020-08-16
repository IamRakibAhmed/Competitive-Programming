#include<bits/stdc++.h>
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
    
    int t;
    cin >> t;

    while (t--)
    {
        int n, num;
        cin >> n;

        int flag = 2 * n;

        vector<int> index(2*n + 1), a;
        for (int i = 1; i <= 2 * n; i++)
        {
            cin >> num;
            index[num] = i;
        }

        for (int i = 2 * n; i >= 1; i--)
        {
            if (index[i] <= flag)
            {
                a.push_back(flag - index[i] + 1);
                flag = index[i] - 1;
            }
        }

        int x = a.size() - 1, target = n;
        int dp[x + 1][target + 1];
        memset(dp, 0, sizeof(dp));

        for (int i = 0; i <= x; i++)
            dp[i][0] = 1;

        for (int i = 1; i <= x; i++)
        {
            for (int j = 1; j <= target; j++)
            {
                dp[i][j] = dp[i - 1][j];
                if (a[i] <= j)
                    dp[i][j] |= dp[i - 1][j - a[i]];
            }
        }

        if (dp[x][target])
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}