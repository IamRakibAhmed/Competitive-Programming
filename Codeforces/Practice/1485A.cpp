#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll res = 1e9;
        for (int i = 0; i <= 30; i++)
        {
            ll n = a, m = b + i, c = 0;
            if (m == 1) continue;
            while (n != 0)
            {
                n /= m;
                c++;
            }

            res = min(res, c + i);
        }

        cout << res << endl;
    }

    return 0;
}