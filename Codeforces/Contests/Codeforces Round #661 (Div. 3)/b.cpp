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
        int n;
        cin >> n;
        vector<ll> a(n + 5, 0);
        vector<ll> b(n + 5, 0);

        ll amin = LONG_MAX, bmin = LONG_MAX;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            amin = min(amin, a[i]);
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            bmin = min(bmin, b[i]);
        }

        ll c = 0;

        for(int i = 0; i < n; i++)
        {
            if((a[i] > amin) && (b[i] > bmin))
            {
                ll x = a[i] - amin;
                ll y = b[i] - bmin;
                ll z = min(x, y);

                a[i] -= z;
                b[i] -= z;
                c += z;
            }

            if(a[i] > amin)
            {
                ll x = a[i] - amin;
                a[i] -= x;
                c += x;
            }

            if(b[i] > bmin)
            {
                ll x = b[i] - bmin;
                b[i] -= x;
                c += x;
            }
        }

        cout << c << endl;
    }
    
    return 0;
}