#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll solve(ll a[], ll tar, ll n, ll w, ll res)
{
    ll sum = 0;
    for (int i = 0; i < w; i++)
    {
        ll t = 0;
        if (a[i] > tar) t = abs(n - a[i] + tar);
        else t = abs(n - tar + a[i]);

        ll temp = min(abs(tar - a[i]), t);
        sum += temp;

        if (sum > res) return res;
    }

    return sum;
}
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    int tc = 1;

    while (t--)
    {
        ll w, n;
        cin >> w >> n;

        ll a[w];
        for (int i = 0; i < w; i++) cin >> a[i];

        ll res = INT_MAX;
        for (int i = 0; i < w; i++)
            res = min(res, solve(a, a[i], n, w, res));

        cout << "Case #" << tc << ": " << res << endl;
        tc++;
    }

    return 0;
}