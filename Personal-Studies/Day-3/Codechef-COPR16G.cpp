#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        if (gcd(a, b) > 1) cout << -1 << "\n";
        else cout << (a - 1) * (b - 1) << "\n";
    }

    return 0;
}