#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll extended_euclid(ll a, ll b, ll *x, ll *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;

        return a;
    }

    ll x1, y1;
    ll gcd = extended_euclid(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll a, b;
    while (cin >> a >> b)
    {
        ll x, y;
        ll res = extended_euclid(a, b, &x, &y);
        cout << x << " " << y << " " << res << endl;
    }

    return 0;
}