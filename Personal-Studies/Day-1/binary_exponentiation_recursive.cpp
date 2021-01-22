#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll binpow(ll a, ll n)
{
    if (n == 0) return 1;

    ll res = binpow(a, n / 2);
    if (n % 2) return res * res * a;
    else return res * res;
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