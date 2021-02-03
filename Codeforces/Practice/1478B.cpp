#include<bits/stdc++.h>
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
        int q, d;
        cin >> q >> d;

        vector<ll> a(q);
        for (int i = 0; i < q; i++)
            cin >> a[i];

        for (int i = 0; i < q; i++)
        {
            ll n = a[i], flag = 0;
            while (n > 0)
            {
                ll x = n, flag1 = 0;

                while (x != 0)
                {
                    int rem = x % 10;
                    if (rem == d)
                    {
                        flag = 1;
                        flag1 = 1;
                        break;
                    }

                    x /= 10;
                }

                if (flag1 == 1) break;
                n -= d;
            }

            if (flag == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;
}