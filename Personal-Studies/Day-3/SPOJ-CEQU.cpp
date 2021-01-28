#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll euclid(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;

        return a;
    }

    ll x1, y1;
    ll gcd = euclid(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

bool solve(ll a, ll b, ll c, ll &x0, ll &y0, ll &g)
{
    g = euclid(abs(a), abs(b), x0, y0);

    if (c % g != 0) return false;

    x0 *= (c / g);
    y0 *= (c / g);
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    
    return true;
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

    for (int i = 1; i <= t; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        ll x, y, g;
        bool res = solve(a, b, c, x, y, g);
        if (res) cout << "Case " << i << ": " << "Yes" << endl;
        else cout << "Case " << i << ": "  << "No" << endl;
    }

    return 0;
}