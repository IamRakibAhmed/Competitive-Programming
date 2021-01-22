#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define m 10000007

ll binpow(ll a, ll b)
{
    ll res = 1 % m;
    a %= m;
    while (b > 0)
    {
        if (b & 1) res = ((res % m) * (a % m)) % m;
        a = ((a % m) * (a % m)) % m;
        b >>= 1;
    }

    return res;
}

int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll n, k;
    while (cin >> n >> k)
    {
        if (n == 0 && k == 0) break;

        ll a = binpow(n, k);
        ll b = binpow(n, n);
        ll c = binpow(n - 1, n - 1) * 2;
        ll d = binpow(n - 1, k) * 2;
        ll res = (a + b + c + d) % m;
        cout << res << endl;
    }
    return 0;
}