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

    ll c, n, p, w;
    cin >> c >> n >> p >> w;
    ll res = 0, req = w;
    if (w / c > 1e8)
    {
        ll rel = c - p;
        if (rel >= 0) cout << w / c << endl;
        else
        {
            res += w / c - 1e5;
            req -= (w / c - 1e5) * c;

            while (req >= c)
            {
                req -= c;
                res++;
                ll slots = req / p;

                if (req % p != 0) slots++;
                if (res + slots > n)
                {
                    res--;
                    break;
                }
            }
            cout << res << endl;
        }
    }
    else
    {
        while (req >= c)
        {
            req -= c;
            res++;
            ll slots = req / p;

            if (req % p != 0) slots++;
            if (res + slots > n)
            {
                res--;
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}