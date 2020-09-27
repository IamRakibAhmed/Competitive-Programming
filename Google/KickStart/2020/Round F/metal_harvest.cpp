#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;

    int t, i = 1;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> arr;
        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            arr.push_back(make_pair(a, b - a));
        }

        sort(arr.begin(), arr.end());
        ll temp = 0, ans = 0;

        for (int i = 0; i < arr.size(); i++)
        {
            ll l = arr[i].first, r = arr[i].second;
            if (temp < l + r)
            {
                ll val = ((l + r) - max(l, temp) - 1) / k + 1;
                ans += val;
                temp = max(temp, l) + k * val;
            }
        }
        cout << "Case #" << i << ": " << ans << endl;
        i++;
    }

    return 0;
}