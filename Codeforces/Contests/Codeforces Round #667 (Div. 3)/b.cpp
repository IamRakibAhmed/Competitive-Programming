#include <bits/stdc++.h>
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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll ma = max(a - n, x);
        ll mb = max(b - n, y);

        if (ma < mb)
        {
            ll val = ma;
            val = n - (a - val);
            cout << ma * max(b - val, y) << endl;
        }
        else
        {
            ll val = mb;
            val = n - (b - val);
            cout << max(a - val, x) * mb << endl;
        }
    }

    return 0;
}