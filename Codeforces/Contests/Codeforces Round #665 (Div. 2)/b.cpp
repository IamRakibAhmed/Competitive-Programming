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
        vector<ll> a(3, 0), b(3, 0);
        for(int i = 0; i < 3; i++)
            cin >> a[i];
        for(int i = 0; i < 3; i++)
            cin >> b[i];

        ll res = 0;
        int mn = 0;

        mn = min(a[2], b[1]);
        res += mn * 2;
        a[2] -= mn;
        b[1] -= mn;
        mn = min(a[2] + a[0], b[2]);
        b[2] -= mn;
        res -= 2 * b[2];

        cout << res << endl;
    }

    return 0;
}