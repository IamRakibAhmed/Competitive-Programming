#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<bitset>
#include<cassert>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<fstream>
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

    ll h, w, m;
    cin >> h >> w >> m;

    vector<ll> y(m, 0), x(m, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> y[i] >> x[i];
        y[i]--;
        x[i]--;
    }

    set<pair<int, int>> s;
    for (int i = 0; i < m; i++)
        s.insert(make_pair(y[i], x[i]));

    vector<pair<int, int>> sy(h), sx(w);
    for (int i = 0; i < h; i++)
        sy[i] = make_pair(0, i);
    for (int i = 0; i < w; i++)
        sx[i] = make_pair(0, i);

    for (int i = 0; i < m; i++)
    {
        sy[y[i]].first++;
        sx[x[i]].first++;
    }

    sort(sy.rbegin(), sy.rend());
    sort(sx.rbegin(), sx.rend());

    for (int i = 0; i < h; i++)
    {
        if (sy[i].first != sy[0].first)
            break;
        for (int j = 0; i < w; j++)
        {
            if (sx[j].first != sx[0].first)
                break;

            if (s.find(make_pair(sy[i].second, sx[j].second)) == s.end())
            {
                cout << (sy[0].first + sx[0].first) << endl;
                return 0;
            };
        }
    }

    cout << (sy[0].first + sx[0].first - 1) << endl;

    return 0;
}