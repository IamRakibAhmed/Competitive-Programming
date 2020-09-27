#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
    
    ll t, i = 0;
    cin >> t;

    while (t--)
    {
        ll n, x, p;
        cin >> n >> x;

        vector<pair<ll, ll>> a;
        for (ll i = 0; i < n; i++)
        {
            cin >> p;
            a.push_back(make_pair((p - 1) / x, i + 1));
        }

        sort(a.begin(), a.end());

        i++;
        cout << "Case #" << i << ": ";
        for (ll i = 0; i < a.size(); i++)
            cout << a[i].second << " ";

        cout << endl;
    }

    return 0;
}