#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;

    ll t, i = 1;
    cin >> t;

    while (t--)
    {
        ll s, r1, p1, r2, p2, c;
        cin >> s >> r1 >> p1 >> r2 >> p2 >> c;

        bool flag = false;
        for (ll i = 0; i < c; i++)
        {
            ll x, y;
            cin >> x >> y;

            if (x == 2 && y == 2) flag = true;
        }

        ll ans;
        if (r2 == 2 && p2 == 2) ans = max(c - 2, (ll)-1);
        else if (flag) ans = 0;
        else
        {
            if (r1 == 2 && p1 == 2) ans = min((ll)1, (ll)2 - c);
            else ans = 2 - c;
        }

        cout << "Case #" << i << ": " << ans << endl;
        i++;
    }

    return 0;
}