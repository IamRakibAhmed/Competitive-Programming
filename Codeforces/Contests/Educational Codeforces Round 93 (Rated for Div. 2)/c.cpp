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
        int n;
        cin >> n;

        string str;
        cin >> str;

        map<ll, ll> a;
        ll c = 0, res = 0;
        a[0]++;
        
        for (int i = 0; i < n; i++)
        {
            c += (int)(str[i] - '0');
            res += a[c - (i + 1)];
            a[c - (i + 1)]++;
        }

        cout << res << endl;
    }

    return 0;
}