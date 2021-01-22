#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define m 1000000007

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
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--)
    {
        ll n, ans;
        cin >> n;

        if (n < 3)
        {
            cout << n << endl;
            continue;
        }

        if (n % 3 == 1)
        {
            ll a = (n - 4) / 3;
            ans = 4 * binpow(3, a);
        }
        else if (n % 3 == 2)
        {
            ll a = (n - 2) / 3;
            ans = 2 * binpow(3, a);
        }
        else ans = binpow(3, n / 3);

        ans %= m;
        cout << ans << endl;
    }

    return 0;
}