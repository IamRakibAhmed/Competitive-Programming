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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n, 0);
        for (int i = 0; i < n; i++) cin >> a[i];

        ll res = 0;
        sort(a.begin(), a.end());

        for (int i = 1; i < n; i++)
            res += (k - a[i]) / a[0];

        cout << res << endl;
    }

    return 0;
}