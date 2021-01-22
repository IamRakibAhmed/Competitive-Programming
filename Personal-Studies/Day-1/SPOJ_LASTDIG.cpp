#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll binpow(ll a, ll b, int m)
{
    ll res = 1 % m;
    a %= m;
    while (b > 0)
    {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }

    return res;
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

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll ans = binpow(a, b, 10);
        cout << ans << endl;
    }

    return 0;
}