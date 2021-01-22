#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll binpow(ll a, ll n)
{
    ll res = 1;
    while (n > 0)
    {
        if (n & 1) res *= a;
        a *= a;
        n >>= 1;
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

    ll a, n;
    cin >> a >> n;

    ll ans = binpow(a, n);
    cout << ans << endl;

    return 0;
}