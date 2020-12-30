#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    ll t, val;
    cin >> t;

    float x, y;
    map<pair<float, float>, ll> points;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> val;
        points.insert({{x, y}, val});
    }

    for (auto i : points)
    {
        int flag = 0, flag1 = 0, sign = 0;
        for (auto j : points)
        {
            if (j.first != i.first)
            {
                if (j.second * ((0 - i.first.first) * (j.first.second - i.first.second) - (0 - i.first.second) * (j.first.first - i.first.first)) < 0)
                    flag = 1;
                if (j.second * ((0 - i.first.first) * (j.first.second - i.first.second) - (0 - i.first.second) * (j.first.first - i.first.first)) > 0)
                    flag1 = 1;
                if (j.second * ((0 - i.first.first) * (j.first.second - i.first.second) - (0 - i.first.second) * (j.first.first - i.first.first)) == 0)
                {
                    if (sign == 0) sign = j.second;
                    else if (sign != 0 && sign != j.second)
                    {
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }

        if ((flag == 0 && flag1 != 0) || (flag != 0 && flag1 == 0))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}