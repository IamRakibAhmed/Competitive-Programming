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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        auto mx = max_element(a.begin(), a.end());
        ll x = *mx;
        int c = 0;

        if (k & 1)
        {
            for (int i = 0; i < n; i++)
                a[i] = x - a[i];
        }
        else
        {
            while(c < 2)
            {
                auto mx = max_element(a.begin(), a.end());
                ll res = *mx;

                for (int i = 0; i < n; i++)
                    a[i]  = res - a[i];
                
                c++;
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }

    return 0;
}