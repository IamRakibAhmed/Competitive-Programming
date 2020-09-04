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
        ll n;
        cin >> n;

        if (n == 2)
        {
            ll x, y;
            cin >> x >> y;
            cout << x << ' ' << y << endl;
        }
        else
        {
            ll x, y;
            cin >> x >> y;

            ll diff = y - x;
            ll val = 0;

            vector<ll> a;
            a.push_back(x);
            a.push_back(y);

            for (ll i = 1; i <= diff; i++)
            {
                if (diff % i != 0)
                    continue;
                if (diff / i + 1 > n)
                    continue;

                val = i;
                break;
            }

            ll seg = n - 2;
            for (ll i = x + 1; i < y && seg > 0; i++)
            {
                if ((i - x) % val == 0)
                {
                    seg--;
                    a.push_back(i);
                }
            }
            while (seg > 0 && (x - val) > 0)
            {
                x -= val;
                a.push_back(x);
                seg--;
            }
            while (seg > 0)
            {
                y += val;
                seg--;
                a.push_back(y);
            }

            for (ll i : a)
                cout << i << ' ';
                
            cout << endl;
        }
    }

    return 0;
}