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
        int n;
        cin >> n;

        vector<ll> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        ll res = -5e18;

        for (int i = 0; i < 6; i++)
        {
            ll val = 1;
            for (int j = 0; j < i; j++)
                val *= a[j];
            for (int j = 0; j < 5 - i; j++)
                val *= a[n - 1 - j];

            res = max(res, val);
        }

        cout << res << endl;
    }

    return 0;
}