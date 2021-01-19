#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MAX = 2e5 + 5;

int n, m, val[MAX];
pair<int, int> p1[MAX], p2[MAX];
string s;

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
        cin >> n >> m >> s;
        int cur = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == '+') cur++;
            if (s[i - 1] == '-') cur--;
            val[i] = cur;
        }

        p1[0] = make_pair(0, 0);
        p2[n + 1] = make_pair(val[n], val[n]);
        for (int i = 1; i <= n; i++)
        {
            p1[i] = p1[i - 1];
            p1[i].first = max(p1[i].first, val[i]);
            p1[i].second = min(p1[i].second, val[i]);
        }
        for (int i = n; i >= 1; i--)
        {
            p2[i] = p2[i + 1];
            p2[i].first = max(p2[i].first, val[i]);
            p2[i].second = min(p2[i].second, val[i]);
        }
        while (m--)
        {
            int l, r;
            cin >> l >> r;
            int v = val[l - 1] - val[r];
            pair<int, int> res = p1[l - 1];
            res.first = max(res.first, v + p2[r + 1].first);
            res.second = min(res.second, v + p2[r + 1].second);
            cout << res.first - res.second + 1 << endl;
        }
    }

    return 0;
}